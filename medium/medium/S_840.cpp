#include "S_840.h"

int Solution::numMagicSquaresInside(std::vector<std::vector<int>>& grid) {
    int ans = 0;
    int n = grid.size(); 
    int m = grid[0].size();

    // Iterate through every possible top-left corner of a 3x3 subgrid
    // We stop when i+2 or j+2 would exceed the grid boundaries
    for (int i = 0; i + 2 < n; i++) {
        for (int j = 0; j + 2 < m; j++) {
            if (isMagic(grid, i, j)) ans++;
        }
    }
    return ans;
}

bool Solution::isMagic(std::vector<std::vector<int>>& g, int r, int c) {
    // Frequency array to check uniqueness of digits 1-9
    std::vector<int> cnt(10, 0);

    // 1. Verify all numbers are between 1-9 and distinct
    for (int i = r; i < r + 3; i++) {
        for (int j = c; j < c + 3; j++) {
            int x = g[i][j];
            // If out of range or duplicate found immediately return false
            if (x < 1 || x > 9 || cnt[x]++) return false;
        }
    }

    // 2. Verify Row Sums (Must be 15)
    for (int i = 0; i < 3; i++) {
        if (g[r + i][c] + g[r + i][c + 1] + g[r + i][c + 2] != 15)
            return false;
    }

    // 3. Verify Column Sums (Must be 15)
    for (int j = 0; j < 3; j++) {
        if (g[r][c + j] + g[r + 1][c + j] + g[r + 2][c + j] != 15)
            return false;
    }

    // 4. Verify Diagonal Sums (Must be 15)
    if (g[r][c] + g[r + 1][c + 1] + g[r + 2][c + 2] != 15) return false;
    if (g[r][c + 2] + g[r + 1][c + 1] + g[r + 2][c] != 15) return false;

    return true;
}