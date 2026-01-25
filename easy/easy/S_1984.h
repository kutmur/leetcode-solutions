#pragma once
#include <vector>
#include <algorithm>
#include <climits> // Required for INT_MAX

class Solution {
public:
    /**
     * Calculates the minimum difference between the highest and lowest 
     * of k scores picked from the input vector.
     * * @param nums Vector of integer scores.
     * @param k Number of scores to select.
     * @return The minimum possible difference.
     */
    int minimumDifference(std::vector<int>& nums, int k);
};