#include "S_994.h"

int Solution::orangesRotting(std::vector<std::vector<int>>& grid) {
    if (grid.empty() || grid[0].empty()) {
        return 0;
    }

    int rows = grid.size();
    int cols = grid[0].size();

    std::queue<std::pair<int, int>> rottenQueue;
    int freshCount = 0;

    // Initial scan of the grid
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            if (grid[row][col] == 1) {
                freshCount++;
            } else if (grid[row][col] == 2) {
                rottenQueue.emplace(row, col);
            }
        }
    }

    // If there are no fresh oranges to begin with, no time is needed.
    if (freshCount == 0) {
        return 0;
    }

    // Directions for adjacent cells: {Up, Right, Down, Left}
    const int directions[5] = {-1, 0, 1, 0, -1};
    int minutes = 0;

    // Start the BFS process
    while (!rottenQueue.empty()) {
        int currentLevelSize = rottenQueue.size();
        bool rottedThisMinute = false;

        for (int i = 0; i < currentLevelSize; ++i) {
            auto [currentRow, currentCol] = rottenQueue.front();
            rottenQueue.pop();

            for (int dir = 0; dir < 4; ++dir) {
                int nextRow = currentRow + directions[dir];
                int nextCol = currentCol + directions[dir + 1];

                if (nextRow >= 0 && nextRow < rows &&
                    nextCol >= 0 && nextCol < cols &&
                    grid[nextRow][nextCol] == 1) {
                    
                    grid[nextRow][nextCol] = 2;
                    freshCount--;
                    rottenQueue.emplace(nextRow, nextCol);
                    rottedThisMinute = true;
                }
            }
        }
        
        // Only increment minutes if a rot occurred in this level
        if (rottedThisMinute) {
            minutes++;
        }
    }

    // If freshCount is 0, all are rotten. Otherwise, some are unreachable.
    return freshCount == 0 ? minutes : -1;
}