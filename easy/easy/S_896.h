#pragma once
#include <vector>

class Solution {
public:
    /**
     * Checks if the given array is monotonic.
     * An array is monotonic if it is either monotone increasing or monotone decreasing.
     * * @param nums The vector of integers to evaluate.
     * @return True if monotonic, False otherwise.
     */
    bool isMonotonic(std::vector<int>& nums);
};