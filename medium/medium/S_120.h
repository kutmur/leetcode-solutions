#pragma once

#include <vector>       // For std::vector
#include <algorithm>    // For std::min and std::min_element

class Solution {
public:
    /**
     * @brief Given a triangle array, finds the minimum path sum from top to bottom.
     * * This function modifies the input triangle in-place to store intermediate
     * path sums, implementing a top-down dynamic programming approach.
     * * @param triangle A 2D vector representing the triangle of numbers.
     * @return The minimum path sum from the top to any cell in the bottom row.
     */
    int minimumTotal(std::vector<std::vector<int>>& triangle);
};