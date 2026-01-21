// Repetitions
// link: https://cses.fi/problemset/task/1069
//
// Given a string of characters A, C, G, and T, find the largest substring of a
// single repeating character.
//
// Solution:
// Just keep a running sum when repeating
// if larger than max update max
// O(n)

#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    int max{0};
    int running{0};
    char last{str[0]};
    for (int i{0}; i < str.length(); ++i) {
        char curr = str[i];
        if (curr == last) {
            running += 1;
        } else {
            running = 1;
        }
        if (running > max) {
            max = running;
        }
        last = curr;
    }

    std::cout << max << "\n";

    return 0;
}
