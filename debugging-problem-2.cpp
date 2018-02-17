/*
 * This program should compute the factorial of a user-specified value of n.
 *
 * Once compiled, you can run this program like so (here, we're using n = 7):
 *   ./debugging-problem-2 7
 */

#include <iostream>
#include <cstdlib>

/*
 * This function computes and returns the factorial of a given number n.
 */
int factorial(int n) {
  int fact = 1;
  while (n-- > 0) {
    fact *= n;
  }
  return fact;
}


int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "Error: must specify a value for n." << std::endl;
    std::cerr << std::endl;
    std::cerr << "usage: " << argv[0] << " <n>" << std::endl;
    return 1;
  }

  int n = strtol(argv[1], NULL, 0);
  if (n <= 0) {
    std::cerr << "Error: n must be a positive integer value." << std::endl;
    std::cerr << std::endl;
    std::cerr << "usage: " << argv[0] << " <n>" << std::endl;
    return 1;
  }

  int n_factorial = factorial(n);
  std::cout << n << "! = " << n_factorial << std::endl;
}
