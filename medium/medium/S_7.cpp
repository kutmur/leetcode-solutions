#pragma once

// Includes the definitions for integer limits like INT_MAX and INT_MIN
#include <climits> 

class Solution {
public:
    /**
     * @brief Reverses the digits of a 32-bit signed integer.
     *
     * @param x The integer to reverse.
     * @return The reversed integer. If reversing x causes the value 
     * to go outside the 32-bit signed integer range, returns 0.
     */
    int reverse(int x);
};