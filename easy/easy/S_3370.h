#ifndef S_3370_H
#define S_3370_H

class Solution {
public:
    /**
     * @brief Finds the smallest number >= n that consists of all set bits.
     * * This function calculates the number of bits (k) required to represent n,
     * and then returns the number 2^k - 1, which is a number with k bits
     * all set to 1.
     * * @param n The input integer.
     * @return The smallest number >= n of the form 2^k - 1.
     */
    int smallestNumber(int n);
};

#endif // S_3370_H