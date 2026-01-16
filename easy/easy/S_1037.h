#pragma once
#include <vector>

class Solution {
public:
    /**
     * Determines if three points form a boomerang (i.e., are distinct and not collinear).
     * * @param p A vector of vectors containing exactly 3 points [x, y].
     * @return True if the points form a triangle, False if they are on a straight line.
     */
    bool isBoomerang(std::vector<std::vector<int>>& p);
};