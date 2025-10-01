#include "S_547.h"

/**
 * The core logic uses a Depth-First Search (DFS) to explore connected components (provinces).
 * 1. A 'visited' array tracks which cities have been assigned to a province.
 * 2. We iterate through each city. If a city hasn't been visited, it means we've found a new province.
 * 3. We increment the province count and start a DFS from this city.
 * 4. The DFS explores all directly and indirectly connected cities, marking them as visited.
 * 5. This process continues until all cities have been visited.
 */
int Solution::findCircleNum(std::vector<std::vector<int>>& isConnected) {
    int n = isConnected.size();
    if (n == 0) {
        return 0;
    }
    
    int provinceCount = 0;
    std::vector<bool> visited(n, false);

    // Define the DFS traversal as a lambda function for conciseness
    std::function<void(int)> dfs = [&](int city) -> void {
        visited[city] = true;

        // Explore all neighbors of the current city
        for (int neighbor = 0; neighbor < n; ++neighbor) {
            // If there's a connection and the neighbor hasn't been visited yet
            if (isConnected[city][neighbor] == 1 && !visited[neighbor]) {
                dfs(neighbor); // Recursively visit the neighbor
            }
        }
    };

    // Iterate through all cities to find unvisited ones
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            // If a city is not visited, it's the start of a new province.
            // Start DFS to find all cities in this province.
            dfs(i);
            provinceCount++;
        }
    }
    
    return provinceCount;
}