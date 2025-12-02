#ifndef S_3461_H
#define S_3461_H

#include <string>

/**
 * @class Solution
 * @brief Implements a digit string reduction simulation.
 *
 * This class provides a method to repeatedly transform a string of digits
 * by summing adjacent digits modulo 10 until only two digits remain,
 * and then checks if those two digits are equal.
 */
class Solution {
public:
    /**
     * @brief Checks if the final two digits are the same after the reduction process.
     * @param s The initial string of digits.
     * @return true if the final two digits are equal, false otherwise.
     */
    bool hasSameDigits(std::string s);
};

#endif // S_3461_H