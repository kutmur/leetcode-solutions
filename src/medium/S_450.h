#ifndef S_450_H
#define S_450_H

#include <cstddef>

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
    /**
     * @brief Finds the node with the minimum value in a given subtree.
     * 
     * @param node The root of the subtree to search.
     * @return TreeNode* A pointer to the node with the minimum value.
     */
    TreeNode* findMin(TreeNode* node);

public:
    /**
     * @brief Deletes a node with the given key from the Binary Search Tree.
     * 
     * @param root The root of the BST.
     * @param key The key of the node to be deleted.
     * @return TreeNode* The root of the modified BST.
     */
    TreeNode* deleteNode(TreeNode* root, int key);
};

#endif // S_450_H