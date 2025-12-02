#pragma once

// Common standard libraries
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <queue>

// Libraries required by this solution
#include <cmath> // For pow

class Solution {
public:
    /**
     * @brief Calculates the "concatenation value" of an array.
     *
     * The value is found by repeatedly taking the first and last elements,
     * mathematically concatenating them (e.g., 7 and 4 become 74), and
     * adding this to a running total. If one element remains, it's
     * added by itself.
     *
     * @param nums A vector of integers, which is modified (emptied) in-place.
     * @return The total concatenation value as a long long.
     */
    long long findTheArrayConcVal(std::vector<int>& nums);
};