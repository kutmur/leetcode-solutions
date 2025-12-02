#ifndef S_110_H
#define S_110_H

#include <algorithm> // For std::max
#include <cmath>     // For std::abs

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
    /**
     * @brief Determines if a binary tree is height-balanced.
     * @param root A pointer to the root of the binary tree.
     * @return true if the tree is height-balanced, false otherwise.
     */
    bool isBalanced(TreeNode* root);

private:
    /**
     * @brief Helper function to recursively check the height and balance of a subtree.
     * @param node The root of the subtree to check.
     * @return The height of the node if its subtree is balanced, otherwise -1.
     */
    int checkHeight(TreeNode* node);
};

#endif // S_110_H