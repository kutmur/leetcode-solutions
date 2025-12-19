#include "S_64.h"

using std::vector;
using std::min;

int Solution::minPathSum(vector<vector<int>>& grid) {
    if (grid.empty() || grid[0].empty()) {
        return 0;
    }

    int m = grid.size();
    int n = grid[0].size();

    // Create a 2D DP table to store the minimum cost to reach cell (i, j)
    // Note: This uses O(m*n) space. It can be optimized to O(1) by modifying 'grid' in place.
    vector<vector<int>> dp(m, vector<int>(n));

    // Base Case: Origin
    dp[0][0] = grid[0][0];

    // Initialize the first row (can only come from the left)
    for(int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }

    // Initialize the first column (can only come from above)
    for(int i = 1; i < m; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }

    // Fill the rest of the grid based on the minimum of the two possible sources
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            // Cost to reach current cell = value of current cell + min(cost from left, cost from up)
            dp[i][j] = grid[i][j] + min(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    return dp[m - 1][n - 1];
}