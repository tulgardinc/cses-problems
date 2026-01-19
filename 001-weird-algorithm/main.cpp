// Weird Algorithm
// link: https://cses.fi/problemset/task/1068/
//
// given a number n if even divide by 2, if odd multiply by 3 add 1
// stop when n = 1

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int main() {
  std::string line;
  std::getline(std::cin, line);

  unsigned long long n = std::stoull(line);

  std::cout << n << " ";

  while (n > 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    std::cout << n << " ";
  }

  std::cout << "\n";

  return 0;
}
