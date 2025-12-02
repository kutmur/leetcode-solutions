#ifndef S_1448_H
#define S_1448_H

#include <algorithm> // For std::max
#include <climits>   // For INT_MIN

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int goodNodesCount;

    /**
     * @brief Performs a Depth-First Search to count good nodes.
     * 
     * @param node The current node being visited.
     * @param maxValOnPath The maximum value encountered on the path from the root to the parent of the current node.
     */
    void dfs(TreeNode* node, int maxValOnPath);
    
    /**
     * @brief Counts the number of "good" nodes in a binary tree.
     * A node is good if in the path from root to the node there are no nodes with a value greater than it.
     * 
     * @param root The root of the binary tree.
     * @return The total number of good nodes.
     */
    int goodNodes(TreeNode* root);
};

#endif // S_1448_H