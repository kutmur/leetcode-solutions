#ifndef S_547_H
#define S_547_H

#include <vector>
#include <functional>

class Solution {
public:
    /**
     * @brief Finds the number of provinces in a network of cities.
     * 
     * A province is a group of directly or indirectly connected cities.
     * This problem is equivalent to finding the number of connected components in a graph.
     * 
     * @param isConnected An n x n adjacency matrix where isConnected[i][j] = 1 
     *                    if the ith city and the jth city are directly connected, 
     *                    and isConnected[i][j] = 0 otherwise.
     * @return The total number of provinces.
     */
    int findCircleNum(std::vector<std::vector<int>>& isConnected);
};

#endif // S_547_H