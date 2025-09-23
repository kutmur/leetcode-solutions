#ifndef S_338_H
#define S_338_H

#include <vector>

class Solution {
public:
    /**
     * @brief Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
     * @param n The non-negative integer.
     * @return A vector of integers containing the count of set bits for each number from 0 to n.
     */
    std::vector<int> countBits(int n);
};

#endif // S_338_H