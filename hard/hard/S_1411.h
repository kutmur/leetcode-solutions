#pragma once

// While <vector> isn't strictly necessary for the O(1) space solution, 
// it is standard practice to include common containers in the header.
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the number of ways to paint a 3 x n grid with 3 colors
     * such that no adjacent cells share the same color.
     * * @param n The number of rows in the grid.
     * @return The total number of valid paintings modulo 10^9 + 7.
     */
    int numOfWays(int n);
};