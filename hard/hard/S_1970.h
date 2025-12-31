#pragma once
#include <vector>
#include <queue>
#include <utility>
#include <tuple>

class Solution {
public:
    /**
     * Determines the latest day one can walk from the top row to the bottom row.
     * * @param row Number of rows in the grid.
     * @param col Number of columns in the grid.
     * @param cells List of cell coordinates flooded on each day (1-based index).
     * @return The last day traversal is possible.
     */
    int latestDayToCross(int row, int col, std::vector<std::vector<int>>& cells);

private:
    int ROW;
    int COL;
    
    // Direction vectors for moving Right, Left, Down, Up
    const int dr[4] = {0, 0, 1, -1};
    const int dc[4] = {1, -1, 0, 0};

    /**
     * Helper to verify if a path exists from top to bottom on a specific day.
     * Uses Breadth-First Search (BFS).
     */
    bool canCross(int day, const std::vector<std::vector<int>>& cells);
};