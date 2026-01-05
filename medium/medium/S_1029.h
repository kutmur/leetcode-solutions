#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the minimum cost to fly every person to a city such that exactly N 
     * people arrive in each city.
     * * @param costs A 2D vector where costs[i] = [costA, costB]
     * @return The minimum total cost
     */
    int twoCitySchedCost(std::vector<std::vector<int>>& costs);
};