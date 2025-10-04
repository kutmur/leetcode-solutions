#include "S_1466.h"

int Solution::minReorder(int n, std::vector<std::vector<int>>& connections) {
    // Adjacency list where each entry is a pair: {neighbor_node, cost}.
    // cost = 1 means the original edge was from the current node to the neighbor (needs reordering).
    // cost = 0 means the original edge was from the neighbor to the current node (correct direction).
    std::vector<std::vector<std::pair<int, int>>> adjencyList(n);

    for (const auto& connection : connections) {
        int fromNode = connection[0];
        int toNode = connection[1];

        // Original edge: from -> to. Traversing this way costs 1 (a reversal).
        adjencyList[fromNode].emplace_back(toNode, 1);
        // Fictional reverse edge for traversal: to -> from. Traversing this way costs 0.
        adjencyList[toNode].emplace_back(fromNode, 0);
    }

    // Recursive DFS function to count reversals.
    // parentNode is used to avoid going back up the tree immediately.
    std::function<int(int, int)> countReversals = 
        [&](int currentNode, int parentNode) -> int {
        
        int reversalCount = 0;
        
        // Explore all neighbors of the current node.
        for (const auto& [neighborNode, needsReversal] : adjencyList[currentNode]) {
            // If the neighbor is the node we just came from, skip it.
            if (neighborNode != parentNode) {
                // The cost 'needsReversal' is 1 if this is an edge pointing away from the root (0),
                // and 0 otherwise. We add this cost to our count.
                // Then, we recursively explore the subtree rooted at the neighbor.
                reversalCount += needsReversal + countReversals(neighborNode, currentNode);
            }
        }
        return reversalCount;
    };

    // Start the DFS from the capital (node 0) with a non-existent parent (-1).
    return countReversals(0, -1);
}