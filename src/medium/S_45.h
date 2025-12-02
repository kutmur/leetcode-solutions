#ifndef S_45_H
#define S_45_H

#include <vector>
#include <algorithm> // For std::max

class Solution {
public:
    /**
     * @brief Calculates the minimum number of jumps to reach the end of the array.
     * @param nums A vector of non-negative integers where each element represents the maximum jump length from that position.
     * @return The minimum number of jumps.
     */
    int jump(std::vector<int>& nums);
};

#endif // S_45_H