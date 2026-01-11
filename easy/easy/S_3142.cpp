#include "S_3142.h"

using std::vector;

bool Solution::satisfiesConditions(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            // Condition 1: Cell must be equal to the cell below it
            if (i + 1 < m && grid[i][j] != grid[i + 1][j]) {
                return false;
            }

            // Condition 2: Cell must be different from the cell to its right
            if (j + 1 < n && grid[i][j] == grid[i][j + 1]) {
                return false;
            }
        }
    }

    return true;
}