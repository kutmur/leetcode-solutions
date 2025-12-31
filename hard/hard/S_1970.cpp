#include "S_1970.h"

int Solution::latestDayToCross(int row, int col, std::vector<std::vector<int>>& cells) {
    ROW = row;
    COL = col;
    
    // Binary Search bounds:
    // Left: Day 0 (or 1 depending on constraints, usually safest to start minimal)
    // Right: Last day (total number of flooded cells)
    int left = 1; 
    int right = cells.size();
    int ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If we can cross on day 'mid', try to see if we can cross later
        if (canCross(mid, cells)) {
            ans = mid;
            left = mid + 1;
        } else {
            // Otherwise, we need fewer flooded cells
            right = mid - 1;
        }
    }
    
    return ans;
}

bool Solution::canCross(int day, const std::vector<std::vector<int>>& cells) {
    // 0 represents Land, 1 represents Water
    std::vector<std::vector<int>> grid(ROW, std::vector<int>(COL, 0));
    
    // Mark water cells up to the current 'day'
    // Note: Input 'cells' are 1-based, converting to 0-based
    for (int i = 0; i < day; ++i) {
        grid[cells[i][0] - 1][cells[i][1] - 1] = 1;
    }

    std::queue<std::pair<int, int>> q;
    std::vector<std::vector<bool>> visited(ROW, std::vector<bool>(COL, false));

    // Initialize BFS from all valid land cells in the top row
    for (int c = 0; c < COL; ++c) {
        if (grid[0][c] == 0) {
            q.push({0, c});
            visited[0][c] = true;
        }
    }

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        // If we reached the last row, a path exists
        if (r == ROW - 1) return true;

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            // Check bounds, ensure it is land (0), and not visited
            if (nr >= 0 && nr < ROW && nc >= 0 && nc < COL && 
                grid[nr][nc] == 0 && !visited[nr][nc]) {
                visited[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }

    return false;
}