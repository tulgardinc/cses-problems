// Permutations
// link: https://cses.fi/problemset/task/1070
//
// Given n, create a permutation integers in 1..n such that no adjacent elements
// have a difference of 1
//
// Solution
// no answer if n <= 3
// list <= floor(n/2) monotonically increasing, interrupt with monotonically
// increasing floor(n/2) + 1 to n.
// O(n)

#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "1";
        return 0;
    }

    if (n <= 3) {
        std::cout << "NO SOLUTION";
        return 0;
    }

    if (n == 4) {
        std::cout << "2 4 1 3";
        return 0;
    }

    std::string out;

    int i{n};
    int j{n / 2};

    while (j > 0) {
        out += std::to_string(i--) + " " + std::to_string(j--) + " ";
    }

    if (n % 2 == 1) {
        out += std::to_string(n / 2 + 1);
    }

    std::cout << out;

    return 0;
}
