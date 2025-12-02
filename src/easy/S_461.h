#ifndef S_461_H
#define S_461_H

/**
 * @file S_461.h
 * @brief Solution for LeetCode Problem 461: Hamming Distance.
 */

class Solution {
public:
    /**
     * @brief Calculates the Hamming distance between two integers.
     * 
     * The Hamming distance between two integers is the number of positions
     * at which the corresponding bits are different. This implementation
     * uses the property that the XOR of two numbers will have set bits
     * only at the positions where the original numbers' bits differ.
     * The number of set bits is then counted using a built-in function.
     * 
     * @param x The first integer.
     * @param y The second integer.
     * @return int The Hamming distance between x and y.
     */
    int hammingDistance(int x, int y);
};

#endif // S_461_H