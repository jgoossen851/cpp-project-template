
namespace mymath {

  /**
   * @brief Compute the norm of a three element vectory
   * 
   * @param first   First element
   * @param second  Second element
   * @param third   Third element
   * @return double Norm (distance) of the three element vector
   */
  double norm(double first, double second, double third);

  /**
   * @brief Return the nth prime number (zero-indexed) using a precomputed table
   *
   * The precomputed table is only generated for prime numbers less than 1000.
   * This function has undefined behavior for indices of prime numbers whose value
   * value is over 1000.
   * 
   * @param n The index (0-based) of the desired prime number
   * @return unsigned int The prime correspoinding to the given index.
   */
  unsigned int nthPrime(unsigned int n);

}
