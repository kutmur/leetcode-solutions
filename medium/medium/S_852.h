#pragma once
#include <vector>

class Solution {
public:
    /**
     * Finds the index of the peak element in a mountain array.
     * A mountain array strictly increases until the peak and strictly decreases after.
     * * @param arr The mountain array input.
     * @return The index of the peak element.
     */
    int peakIndexInMountainArray(std::vector<int>& arr);
};