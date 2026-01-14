#pragma once
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the minimum number of unique integers remaining after removing k elements.
     * * @param arr The input vector of integers.
     * @param k The number of elements to remove.
     * @return The count of unique integers left.
     */
    int findLeastNumOfUniqueInts(std::vector<int>& arr, int k);
};