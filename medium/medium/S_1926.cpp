#include "S_1926.h"

int Solution::nearestExit(std::vector<std::vector<char>>& maze, std::vector<int>& entrance) {
    int rows = maze.size();
    int cols = maze[0].size();

    // Directions array for exploring neighbors: {up, right, down, left}
    // (dx, dy) pairs are (-1,0), (0,1), (1,0), (0,-1)
    int directions[5] = {-1, 0, 1, 0, -1};

    std::queue<std::pair<int, int>> bfsQueue;

    // Start BFS from the entrance
    bfsQueue.emplace(entrance[0], entrance[1]);

    // Mark the entrance as visited to avoid cycles and re-processing
    maze[entrance[0]][entrance[1]] = '+';

    // distance represents the number of steps from the entrance
    for (int distance = 1; !bfsQueue.empty(); distance++) {
        int currentLevelSize = bfsQueue.size();

        // Process all nodes at the current level (distance)
        for (int i = 0; i < currentLevelSize; i++) {
            auto [currentRow, currentCol] = bfsQueue.front();
            bfsQueue.pop();

            // Explore the 4 neighbors
            for (int dir = 0; dir < 4; dir++) {
                int nextRow = currentRow + directions[dir];
                int nextCol = currentCol + directions[dir + 1];

                // Check if the neighbor is a valid, unvisited path cell
                if (nextRow >= 0 && nextRow < rows &&
                    nextCol >= 0 && nextCol < cols &&
                    maze[nextRow][nextCol] == '.') {
                    
                    // Check if this valid neighbor is an exit
                    if (nextRow == 0 || nextRow == rows - 1 ||
                        nextCol == 0 || nextCol == cols - 1) {
                        // Found the shortest path to an exit
                        return distance;
                    }
                    
                    // If it's a valid path but not an exit, mark as visited and enqueue
                    maze[nextRow][nextCol] = '+';
                    bfsQueue.emplace(nextRow, nextCol);
                }
            }
        }
    }

    // If the queue becomes empty and no exit was found, no path exists
    return -1;
}