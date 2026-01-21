// Increasing Array
// link: https://cses.fi/problemset/task/1094
//
// Given an n integer array, arrange it so that it is increasing
// On each move the value of any element can be increased by one.
// Find the minimum number of moves.
//
// Solution
// Go through the list keeping track of what the previous value was
// and how many moves have been used
// O(n)

#include <algorithm>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long long moves{0};
    int last;
    std::cin >> last;

    int x;
    for (int i{0}; i < n - 1; ++i) {
        std::cin >> x;
        int diff{std::max(0, last - x)};
        moves += diff;
        last = x + diff;
    }

    std::cout << moves << "\n";

    return 0;
}
