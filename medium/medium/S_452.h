#ifndef S_452_H
#define S_452_H

#include <vector>

class Solution {
public:
    /**
     * @brief Finds the minimum number of arrows required to burst all balloons.
     * 
     * @param points A vector of vectors, where each inner vector [x_start, x_end]
     *               represents the coordinates of a balloon.
     * @return The minimum number of arrows required.
     */
    int findMinArrowShots(std::vector<std::vector<int>>& points);
};

#endif // S_452_H