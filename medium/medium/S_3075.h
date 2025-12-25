#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the maximum happiness sum by selecting k children.
     * * @param happiness A vector of integers representing the happiness value of each child.
     * @param k The number of children to select.
     * @return The maximum possible sum of happiness.
     */
    long long maximumHappinessSum(std::vector<int>& happiness, int k);
};