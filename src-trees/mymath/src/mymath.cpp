#include "mymath.h"
#include <Eigen/Dense>

double norm(double first, double second, double third) {
  Eigen::Vector3d vector(first, second, third);
  return vector.norm();
}
