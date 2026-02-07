// Number spiral
// link: https://cses.fi/problemset/task/1071
//
// Given x, y find the number on the number spiral
//
// Solution
// just calculate using the pattern O(t)

#include <algorithm>
#include <iostream>

using ull = unsigned long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    ull x;
    ull y;
    for (int i{0}; i < n; i++) {
        std::cin >> y;
        std::cin >> x;

        ull max{std::max(x, y)};
        ull innerSize{max - 1};

        if (innerSize == 0) {
            std::cout << 1 << "\n";
            continue;
        }

        ull base{innerSize * innerSize};

        if (max % 2 == 0) {
            if (x > y) {
                std::cout << base + y << "\n";
            } else {
                std::cout << base + y + (y - x) << "\n";
            }
        } else {
            if (y > x) {
                std::cout << base + x << "\n";
            } else {
                std::cout << base + x + (x - y) << "\n";
            }
        }
    }
}
