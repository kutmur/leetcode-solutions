#pragma once

#include <string>
#include <vector>
#include <numeric>

class Solution {
public:
    /**
     * @brief Calculates the maximum number of operations to move all '1's to the end.
     * * An operation is triggered at the boundary where a '1' is followed by a '0'.
     * Each such boundary allows all preceding '1's to be "moved".
     *
     * @param s The binary string input.
     * @return The total number of operations.
     */
    int maxOperations(std::string s);
};