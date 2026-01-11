#pragma once
#include <vector>

class Solution {
public:
    /**
     * Determines if the grid satisfies the condition where every cell
     * is equal to the cell below it and different from the cell to its right.
     * * @param grid The 2D integer matrix to evaluate.
     * @return True if conditions are met, false otherwise.
     */
    bool satisfiesConditions(std::vector<std::vector<int>>& grid);
};