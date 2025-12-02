// S_3350.h

#ifndef S_3350_H
#define S_3350_H

#include <vector>
#include <algorithm> // For std::max and std::min

class Solution {
public:
    /**
     * @brief Calculates the maximum length k such that two non-overlapping increasing subarrays of length k exist.
     * @param nums The input vector of integers.
     * @return The maximum possible length k.
     */
    int maxIncreasingSubarrays(std::vector<int>& nums);
};

#endif // S_3350_H