#include "S_63.h"

int Solution::uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();

    // Immediate edge case: Start or End is blocked
    if (obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1) {
        return 0;
    }

    // Using long long to prevent overflow during intermediate calculations,
    // though the problem statement usually guarantees the result fits in int.
    std::vector<std::vector<long long>> dp(m, std::vector<long long>(n, 0));

    // Base case: Starting point
    dp[0][0] = 1;

    // Initialize first row
    // A cell is reachable only if it's not an obstacle AND the cell to its left was reachable
    for (int j = 1; j < n; j++) {
        if (obstacleGrid[0][j] == 0) {
            dp[0][j] = dp[0][j - 1];
        } else {
            dp[0][j] = 0; // Explicitly stating for clarity, though initialized to 0
        }
    }

    // Initialize first column
    // A cell is reachable only if it's not an obstacle AND the cell above was reachable
    for (int i = 1; i < m; i++) {
        if (obstacleGrid[i][0] == 0) {
            dp[i][0] = dp[i - 1][0];
        } else {
            dp[i][0] = 0;
        }
    }

    // Fill the rest of the grid
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[i][j] == 0) {
                // Number of paths = paths from top + paths from left
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return static_cast<int>(dp[m - 1][n - 1]);
}