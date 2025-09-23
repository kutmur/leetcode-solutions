#include "S_338.h"

/**
 * @brief Computes the number of 1's in the binary representation of each number from 0 to n.
 *
 * This implementation uses a dynamic programming approach. The number of set bits
 * for an integer `i` can be derived from a previously computed value. Specifically,
 * the number of set bits in `i` is one more than the number of set bits in `i & (i - 1)`,
 * as `i & (i - 1)` clears the least significant set bit of `i`.
 *
 * @param n The non-negative integer.
 * @return A vector of integers where the element at index i is the count of set bits in i.
 */
std::vector<int> Solution::countBits(int n) {
    // Initialize a vector of size n + 1 with all zeros.
    // ans[i] will store the number of set bits for the integer i.
    std::vector<int> ans(n + 1, 0);

    // Iterate from 1 to n to compute the number of set bits for each integer.
    for (int i = 1; i <= n; i++) {
        // The number of set bits in i is the number of set bits in (i & (i - 1)) plus 1.
        // i & (i - 1) is always less than i, so ans[i & (i - 1)] has already been computed.
        ans[i] = ans[i & (i - 1)] + 1;
    }

    return ans;
}