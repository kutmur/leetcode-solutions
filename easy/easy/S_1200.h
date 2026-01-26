#pragma once
#include <vector>
#include <algorithm>
#include <climits> // For INT_MAX

class Solution {
public:
    /**
     * Finds all pairs of elements with the minimum absolute difference of any two elements.
     * * @param arr The input vector of integers (unsorted).
     * @return A vector of vectors, where each inner vector is a pair [a, b] with a < b.
     */
    std::vector<std::vector<int>> minimumAbsDifference(std::vector<int>& arr);
};