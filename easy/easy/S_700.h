#ifndef S_700_H
#define S_700_H

#include <cstddef> // For nullptr

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
     * @brief Searches for a node with a specific value in a binary search tree.
     * 
     * This implementation uses a Breadth-First Search (BFS) to traverse the tree.
     * It works for any binary tree but is not optimized for a BST.
     * 
     * @param root A pointer to the root of the binary search tree.
     * @param val The value to search for.
     * @return TreeNode* A pointer to the node with the given value, or nullptr if not found.
     */
    TreeNode* searchBST(TreeNode* root, int val);
};

#endif // S_700_H