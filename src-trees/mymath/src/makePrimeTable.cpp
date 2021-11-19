// A program to build a table of primes less than 1000
#include <fstream>
#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  // Ensure input argument is given
  if (argc < 2) {
    return 1;
  }

  std::ofstream fout(argv[1], std::ios_base::out);
  const bool fileOpen = fout.is_open();
  if (fileOpen) {
    fout << "namespace mymath {" << std::endl;
    fout << "int primeTable[] = {" << std::endl;

    // Compute primes using the sieve of Eratosthenes
    int maxPrime = 1000;
    bool potentiallyPrime[maxPrime + 1];
    memset(potentiallyPrime, true, sizeof(potentiallyPrime));
    for (int pp = 2; pp * pp <= maxPrime; pp++) {
      // This number is prime if the flag is still true.
      if (potentiallyPrime[pp] == true) {
        // Mark false all remaining multiples
        for (int ii = pp * pp; ii <= maxPrime; ii += pp) {
          potentiallyPrime[ii] = false;
        }
      }
    }
    // traverse the entire array
    for (int pp = 2; pp <= maxPrime; pp++) {
      if (potentiallyPrime[pp]) {
        fout << pp << "," << std::endl;
      }
    }
    // close the table
    fout << "};" << std::endl;
    fout << "}" << std::endl;
    fout.close();
  }

  return fileOpen ? 0 : 1; // return 0 if wrote the file
}
