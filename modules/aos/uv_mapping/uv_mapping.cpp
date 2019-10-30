#include "uv_mapping.h"

// IGL
#include <igl/boundary_loop.h>
#include <igl/harmonic.h>
#include <igl/map_vertices_to_circle.h>
#include <igl/arap.h>
#include <igl/lscm.h>
#include <igl/remove_duplicates.h>
#include <igl/topological_hole_fill.h>
#include <igl/flipped_triangles.h>

namespace aos
{
    Eigen::MatrixXd compute_arap(Eigen::MatrixXd V, Eigen::MatrixXi F, Eigen::MatrixXd initial_guess)
    {
        Eigen::MatrixXd V_uv;
        try
        {
            igl::ARAPData arap_data;
            arap_data.with_dynamics = true;
            Eigen::VectorXi b = Eigen::VectorXi::Zero(0);
            Eigen::MatrixXd bc = Eigen::MatrixXd::Zero(0, 0);

            // Initialize ARAP
            arap_data.max_iter = 25;
            // 2 means that we're going to *solve* in 2d
            arap_precomputation(V, F, 2, b, arap_data);


            // Solve arap
            V_uv = initial_guess;

            auto success = arap_solve(bc, arap_data, V_uv);

            return V_uv;
        }
        catch (const std::exception& e)
        {
            std::cout << "[ERROR] ARAP failed." << std::endl;
            std::cout << "[ERROR] Error occured:" << std::endl;
            std::cout << "[ERROR] " << e.what() << std::endl;
            return V_uv;
        }
        catch (...)
        {
            std::cout << "[ERROR] Unknown error in ARAP." << std::endl;
            return V_uv;
        }
    }

    Eigen::MatrixXd compute_lscm(Eigen::MatrixXd V, Eigen::MatrixXi F, double ratio)
    {
        Eigen::MatrixXd initial_guess;

        try
        {
            Eigen::VectorXi bnd_LSCM, b_LSCM(2, 1);
            igl::boundary_loop(F, bnd_LSCM);
            int start_index = ratio * bnd_LSCM.size();
            b_LSCM(0) = bnd_LSCM(start_index);
            int mid_bnd_index = round(start_index + bnd_LSCM.size() / 2);
            b_LSCM(1) = bnd_LSCM(mid_bnd_index);
            Eigen::MatrixXd bc_LSCM(2, 2);
            bc_LSCM << 0, 0, 1, 0;

            // LSCM parametrization
            auto success = igl::lscm(V, F, b_LSCM, bc_LSCM, initial_guess);

            return initial_guess;
        }
        catch (const std::exception& e)
        {
            std::cout << "[ERROR] LSCM failed." << std::endl;
            std::cout << "[ERROR] Error occured:" << std::endl;
            std::cout << "[ERROR] " << e.what() << std::endl;
            return initial_guess;
        }
        catch (...)
        {
            std::cout << "[ERROR] Unknown error in LSCM." << std::endl;
            return initial_guess;
        }
    }

    Eigen::MatrixXd compute_harmonic(Eigen::MatrixXd V, Eigen::MatrixXi F)
    {
        Eigen::MatrixXd bnd_uv, uv_init, temp;
        Eigen::MatrixXd V_uv;
        Eigen::VectorXd M;

        try
        {
            igl::doublearea(V, F, M);
            std::vector<std::vector<int>> all_bnds;
            igl::boundary_loop(F, all_bnds);

            // Heuristic primary boundary choice: longest
            auto primary_bnd = std::max_element(all_bnds.begin(), all_bnds.end(), [](const std::vector<int> &a, const std::vector<int> &b) { return a.size() < b.size(); });

            Eigen::VectorXi bnd = Eigen::Map<Eigen::VectorXi>(primary_bnd->data(), primary_bnd->size());

            igl::map_vertices_to_circle(V, bnd, bnd_uv);
            bnd_uv *= sqrt(M.sum() / (2 * igl::PI));
            if (all_bnds.size() == 1)
            {
                if (bnd.rows() == V.rows()) // case: all vertex on boundary
                {
                    uv_init.resize(V.rows(), 2);
                    for (int i = 0; i < bnd.rows(); i++)
                        uv_init.row(bnd(i)) = bnd_uv.row(i);
                }
                else
                {
                    auto success = igl::harmonic(V, F, bnd, bnd_uv, 1, uv_init);
                    if (igl::flipped_triangles(uv_init, F).size() != 0)
                    {
                        auto success = igl::harmonic(F, bnd, bnd_uv, 1, uv_init); // fallback uniform laplacian
                    }
                }
            }
            else
            {
                // if there is a hole, fill it and erase additional vertices.
                all_bnds.erase(primary_bnd);
                Eigen::MatrixXi F_filled;
                igl::topological_hole_fill(F, bnd, all_bnds, F_filled);
                auto success = igl::harmonic(F_filled, bnd, bnd_uv, 1, uv_init);
                temp = uv_init.topRows(V.rows());
                uv_init = temp;
            }

            return uv_init;
        }
        catch (const std::exception& e)
        {
            std::cout << "[ERROR] Harmonic failed." << std::endl;
            std::cout << "[ERROR] Error occured:" << std::endl;
            std::cout << "[ERROR] " << e.what() << std::endl;
            return uv_init;
        }
        catch (...)
        {
            std::cout << "[ERROR] Unknown Error in harmonic." << std::endl;
            return uv_init;
        }
    }

    bool validate_mapping(Eigen::MatrixXd uv)
    {
        auto nb_rows = uv.rows();

        if (nb_rows < 1)
            return false;

        for (auto i = 0; i < nb_rows; i++)
        {
            auto u = uv(i, 0);
            auto v = uv(i, 1);

            if (isnan(u) || isnan(v))
                return false;

            if (u > 100 || u < -100 || v > 100 || v < -100)
                return false;
        }
        return true;
    }

    bool compute_uv_mapping(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F, Eigen::MatrixXd& uv_init)
    {
        using namespace std;
        Eigen::MatrixXd uv_temp;

        bool is_mapping_ok = false;
        int counter = 0, max_iterations = 1;
        bool arap_failed_with_harmonic = false;
        bool arap_failed_with_lscm = false;
        while (!is_mapping_ok && counter < max_iterations)
        {
            auto initial_guess_harmonic = compute_harmonic(V, F);

            if (!arap_failed_with_harmonic)
            {
                is_mapping_ok = validate_mapping(initial_guess_harmonic);

                if (is_mapping_ok)
                {
                    // Compute ARAP using harmonic as initial_guess
                    uv_temp = compute_arap(V, F, initial_guess_harmonic);
                    is_mapping_ok = validate_mapping(uv_temp);
                    if (is_mapping_ok)
                    {
                        std::cout << "[DEBUG] Using ARAP with Harmonic" << std::endl;
                        uv_init = uv_temp;
                        break;
                    }
                    arap_failed_with_harmonic = true;
                }
            }

            auto initial_guess_with_lscm = compute_lscm(V, F, 0.05 * counter);
            if (!arap_failed_with_lscm)
            {
                is_mapping_ok = validate_mapping(initial_guess_with_lscm);
                if (is_mapping_ok)
                {
                    // Compute ARAP using LSCM as initial_guess
                    uv_temp = compute_arap(V, F, initial_guess_with_lscm);
                    is_mapping_ok = validate_mapping(uv_temp);
                    if (is_mapping_ok)
                    {
                        std::cout << "[DEBUG] Using ARAP with LSCM" << std::endl;
                        uv_init = uv_temp;
                        break;
                    }
                    arap_failed_with_lscm = true;
                }
            }

            // If the ARAPs did not work, use the harmonic
            is_mapping_ok = validate_mapping(initial_guess_harmonic);
            if (is_mapping_ok)
            {
                std::cout << "[DEBUG] Using Harmonic" << std::endl;
                uv_init = initial_guess_harmonic;
                break;
            }

            // If the ARAPs and the harmonic did not work, use the LSCM
            is_mapping_ok = validate_mapping(initial_guess_with_lscm);
            if (is_mapping_ok)
            {
                std::cout << "[DEBUG] Using LSCM" << std::endl;
                uv_init = initial_guess_with_lscm;
                break;
            }

            counter++;
        }

        if (is_mapping_ok)
            std::cout << "[DEBUG] UV-Mapping successful" << std::endl;
        else
            std::cout << "[ERROR] None of the UV-Mapping techniques worked." << std::endl;

        return is_mapping_ok;
    }
}