#include "mymath.h"
#include <Eigen/Dense>

double mymath::norm(double first, double second, double third) {
  Eigen::Vector3d vector(first, second, third);
  return vector.norm();
}
