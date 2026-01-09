#pragma once
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    /**
     * Merges two lists of items, summing weights for matching value IDs.
     * The result is returned sorted by value ID.
     * * @param items1 List of [value, weight] pairs.
     * @param items2 List of [value, weight] pairs.
     * @return std::vector<std::vector<int>> Sorted merged list.
     */
    std::vector<std::vector<int>> mergeSimilarItems(std::vector<std::vector<int>>& items1, std::vector<std::vector<int>>& items2);
};