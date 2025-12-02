#ifndef S_2048_H
#define S_2048_H

#include <unordered_map>

/**
 * @brief Solves LeetCode 2048: Next Greater Numerically Balanced Number.
 * * This class finds the smallest numerically balanced number strictly
 * greater than a given integer n.
 */
class Solution {
public:
    /**
     * @brief Checks if a number is numerically balanced.
     * * A number is numerically balanced if for every digit 'd' in the number,
     * 'd' appears 'd' times.
     * * @param n The integer to check.
     * @return true if the number is balanced, false otherwise.
     */
    bool isBalanced(int n);
    
    /**
     * @brief Finds the next numerically balanced number greater than n.
     * * @param n The integer to start searching from.
     * @return The smallest numerically balanced integer greater than n.
     */
    int nextBeautifulNumber(int n);
};

#endif // S_2048_H