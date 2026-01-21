#pragma once

class Solution {
public:
    /**
     * @brief Checks if there exists a non-negative integer x such that x + reverse(x) equals num.
     * * @param num The target non-negative integer (0 <= num <= 10^5).
     * @return true if such an integer exists, false otherwise.
     */
    bool sumOfNumberAndReverse(int num);

private:
    /**
     * @brief Helper function to reverse the digits of an integer.
     * * @param x The integer to reverse.
     * @return The reversed integer.
     */
    int reverseInt(int x);
};