#pragma once
#include <vector>
#include <algorithm>
#include <climits>
#include <initializer_list>

class Solution {
public:
    /**
     * Calculates the maximum dot product between non-empty subsequences of two arrays.
     * * @param nums1 The first vector of integers.
     * @param nums2 The second vector of integers.
     * @return The maximum dot product value.
     */
    int maxDotProduct(std::vector<int>& nums1, std::vector<int>& nums2);
};