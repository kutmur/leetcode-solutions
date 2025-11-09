#pragma once

#include <string>       // For std::string
#include <algorithm>    // For std::reverse

/**
 * @class Solution
 * @brief Implements the "Add Binary" (LeetCode #67) solution.
 *
 * This class provides a method to add two binary strings and return their
 * sum as a binary string, simulating manual base-2 addition.
 */
class Solution {
public:
    /**
     * @brief Adds two binary strings.
     *
     * @param a The first binary string (e.g., "1011").
     * @param b The second binary string (e.g., "1").
     * @return The sum as a new binary string (e.g., "1100").
     */
    std::string addBinary(std::string a, std::string b);
};