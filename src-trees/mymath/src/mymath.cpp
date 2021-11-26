#include "mymath.h"
#include <Eigen/Dense>
#include "PrimeTable.h"

double mymath::norm(double first, double second, double third) {
  Eigen::Vector3d vector(first, second, third);
  return vector.norm();
}

unsigned int mymath::nthPrime(unsigned int n) {
  if (n < sizeof(mymath::primeTable) / sizeof(int)) {
    return mymath::primeTable[n];
  } else {
    return 0;
  }
}
