#include "S_407.h"

int Solution::trapRainWater(std::vector<std::vector<int>>& heightMap) {
    int m = heightMap.size();
    if (m <= 2) return 0;
    int n = heightMap[0].size();
    if (n <= 2) return 0;

    // Min-priority queue to store {height, row, col}
    // std::greater makes it a min-heap on the first element of the vector.
    std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, std::greater<std::vector<int>>> pq;

    std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));

    // Add all border cells to the priority queue and mark them as visited.
    // These cells form the initial boundary wall.
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                pq.push({heightMap[i][j], i, j});
                visited[i][j] = true;
            }
        }
    }

    int totalWater = 0;
    
    // Directions for neighbors: up, down, left, right
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // Process cells from the lowest boundary point inwards (Dijkstra/BFS-like).
    while (!pq.empty()) {
        std::vector<int> cell = pq.top();
        pq.pop();
        int h = cell[0]; // Current boundary height (water level).
        int r = cell[1];
        int c = cell[2];

        // Explore neighbors of the current cell.
        for (auto& dir : directions) {
            int nr = r + dir[0];
            int nc = c + dir[1];

            // Check if the neighbor is a valid, unvisited inner cell.
            if (nr > 0 && nr < m - 1 && nc > 0 && nc < n - 1 && !visited[nr][nc]) {
                
                int neighborHeight = heightMap[nr][nc];

                // If the neighbor is lower than the current water level (h), it traps water.
                if (neighborHeight < h) {
                    totalWater += (h - neighborHeight);
                }
                
                visited[nr][nc] = true;
                
                // Add the neighbor to our boundary. The new effective wall height at this
                // point is the maximum of the current water level and the neighbor's own height.
                pq.push({std::max(h, neighborHeight), nr, nc});
            }
        }
    }

    return totalWater;
}