#pragma once
#include <vector>
#include <algorithm> // Required for std::sort

class Solution {
public:
    /**
     * Determines if a target integer exists in the integer array.
     * This implementation normalizes the data via sorting before searching.
     * * @param nums The input vector (potentially rotated or unsorted)
     * @param target The value to search for
     * @return true if target exists, false otherwise
     */
    bool search(std::vector<int>& nums, int target);
};