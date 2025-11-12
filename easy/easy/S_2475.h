#pragma once

#include <vector>
#include <unordered_map>

class Solution {
public:
    /**
     * @brief Calculates the number of unequal triplets in an array.
     * * A triplet (i, j, k) is unequal if 0 <= i < j < k < nums.size() and
     * nums[i] != nums[j], nums[i] != nums[k], and nums[j] != nums[k].
     * * @param nums The input vector of integers.
     * @return The total number of unequal triplets.
     */
    int unequalTriplets(std::vector<int>& nums);
};