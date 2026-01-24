#pragma once
#include <vector>
#include <algorithm> // For std::sort, std::max
#include <climits>   // For INT_MIN

class Solution {
public:
    /**
     * Calculates the minimized maximum pair sum from the given array.
     * * @param nums A vector of integers to be paired.
     * @return The minimized maximum sum of the pairs.
     */
    int minPairSum(std::vector<int>& nums);
};