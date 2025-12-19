#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the minimum path sum from top-left to bottom-right.
     * Moves are restricted to strictly down or right.
     * * @param grid A 2D vector of non-negative integers.
     * @return The minimum sum of the path.
     */
    int minPathSum(std::vector<std::vector<int>>& grid);
};