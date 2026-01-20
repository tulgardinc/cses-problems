// Missing Number
// link: https://cses.fi/problemset/task/1083/
//
// given all numbers 1,2,...,n there is one missing, find the missing one

// What we know:
// Largest number is n
// There is one missing number
// Order of number is random
// Every number must have a before and after other than target

// Simple solution
// sort into list O(nlogn)
// iterate find missing one O(n)
// O(n^2logn)

// THIS IS A FAILED ATTEMPT
// =======
// Solution
// missing number is target t
// have sets cand and enc
// for number x O(n) add x to enc O(1)
// remove x-1 from cand O(1)
// if x+1 is not encountered add x to cand O(1)
// by the end the only number that remains in cand will be t-1 O(1)
// O(n)
// =======
//
// First of all the time complexity is not correct because the std::set has
// O(logn) operations becasue it is a rb tree. Which means the algorithm is
// actually O(nlogn) like the simple solution. To actually get O(1) ops
// unorderd_set is correct.
//
// Secondly there are much simpler solutions.
//
// Since this is a have we encountered or not problem, sorting is irrelevant.
// Go in a list and set a list of booleans to keep track of what has been
// encountered, then go again and find the only one that has not been
// encountered. O(2*n) = O(n).
//
// For an even better solution we may exploit the fact that we are dealing with
// numbers and numbers already have encoded value. Wich means to check if we
// have encountered something previously we can rely on the numeric values of
// the numbers. My solution treated them like arbitrary objects with no inherent
// uniquness condtraint. What we can do is for example, add all number 1-n, and
// then subtract every encounterd number. The result would be the target. Or we
// can use xor, which does not have to deal with growing integers. The xor
// method is what I will use in the solution.
//

#include <iostream>

int main() {
    // n
    int n;
    std::cin >> n;

    int ans{0};
    for (int i{1}; i <= n; ++i) {
        ans ^= i;
    }

    int x;
    for (int i{0}; i < n - 1; ++i) {
        std::cin >> x;
        ans ^= x;
    }

    std::cout << ans << "\n";

    return 0;
}
