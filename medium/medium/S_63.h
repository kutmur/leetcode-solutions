#pragma once
#include <vector>

class Solution {
public:
    /**
     * Calculates the number of unique paths from top-left to bottom-right
     * avoiding obstacles.
     * * @param obstacleGrid A 2D grid where 1 represents an obstacle and 0 is empty space.
     * @return The total number of unique paths.
     */
    int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid);
};