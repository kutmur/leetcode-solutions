// S_543.h
#ifndef S_543_H
#define S_543_H

#include <algorithm>

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
private:
    int res = 0; 

    // Helper function to calculate the height of a subtree and update the diameter
    int dfs(TreeNode* curr);

public:
    /**
     * @brief Calculates the diameter of a binary tree.
     * The diameter of a binary tree is the length of the longest path between any two nodes in a tree.
     * This path may or may not pass through the root.
     * @param root A pointer to the root of the binary tree.
     * @return The diameter of the binary tree.
     */
    int diameterOfBinaryTree(TreeNode* root);
};

#endif // S_543_Hv