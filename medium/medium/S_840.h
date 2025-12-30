#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
    // Main API: Counts how many 3x3 magic squares exist in the grid
    int numMagicSquaresInside(std::vector<std::vector<int>>& grid);

private:
    // Helper: Validates specific 3x3 subgrid starting at (r, c)
    bool isMagic(std::vector<std::vector<int>>& g, int r, int c);
};