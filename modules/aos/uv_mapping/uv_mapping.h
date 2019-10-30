#ifndef UV_MAPPING_H
#define UV_MAPPING_H

#include <Eigen/Dense>

namespace aos
{
    bool compute_uv_mapping(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F, Eigen::MatrixXd& uv_init);
}

#endif // UV_MAPPING_H