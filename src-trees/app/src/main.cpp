/** @file */

#include <iostream>
#include "version.h"
#include "helloworld.h"
#include "mymath.h"

/**
 * @brief Main function (entry point)
 *
 * The main function prints useage information if incorrect arguments are given.
 * Otherwise, it prints a greeting and then prints results of some math functions.
 * 
 * @param argc Number of arguments
 * @param argv Vector of arguments
 * @return int Flag to indicate success (0) or failure (1)
 */
int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << argv[0] << " Version " << PROJECT_VERSION
              << " (Major = " << PROJECT_VERSION_MAJOR << ", "
              << "Minor = " << PROJECT_VERSION_MINOR << ", "
              << "Patch = " << PROJECT_VERSION_PATCH << ")" << std::endl;
    std::cout << "Usage: " << argv[0] << " name" << std::endl;
    return 1;
  }
  
  // Print greeting
  helloworld::sayHelloWorld();
  helloworld::sayWelcome(argv[1]);

  // Do some math
  double length = mymath::norm(1, 2, 3);
  std::cout << "The length of the vector (1,2,3) is " << length << std::endl;

  std::cout << "The 4th prime (0 indexed) is: " << mymath::nthPrime(4) << std::endl;
  
  return 0;
}
