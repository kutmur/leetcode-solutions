#pragma once
#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the minimum time (in seconds) to traverse all points in order.
     * Moving vertically, horizontally, or diagonally takes 1 second.
     * * @param points A vector of 2D coordinates.
     * @return The total time required.
     */
    int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points);
};