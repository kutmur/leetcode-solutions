#ifndef S_1466_H
#define S_1466_H

#include <vector>
#include <functional>
#include <utility>

class Solution {
public:
    /**
     * @brief Calculates the minimum number of edges to reorder so that all paths lead to city 0.
     * 
     * The problem is modeled as a tree with city 0 as the root. We need to find how many edges
     * are pointing away from the root. A DFS traversal is performed starting from node 0.
     * A modified adjacency list is used to keep track of original edge directions.
     * 
     * @param n The number of cities.
     * @param connections A list of connections, where connections[i] = [from, to].
     * @return The minimum number of edges that need to be reordered.
     */
    int minReorder(int n, std::vector<std::vector<int>>& connections);
};

#endif // S_1466_H