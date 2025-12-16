#pragma once
#include <climits>

class Solution {
public:
    /**
     * Divides two integers, explicitly handling the 32-bit signed integer overflow edge case.
     * * @param dividend The integer to be divided.
     * @param divisor The integer to divide by.
     * @return The quotient.
     */
    int divide(int dividend, int divisor);
};