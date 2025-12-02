#include "S_222.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int Solution::countNodes(TreeNode* root) {
    if (!root) {
        return 0;
    }
    
    int leftHeight = 0;
    TreeNode* l_node = root;
    while (l_node) {
        leftHeight++;
        l_node = l_node->left;
    }
    
    int rightHeight = 0;
    TreeNode* r_node = root;
    while (r_node) {
        rightHeight++;
        r_node = r_node->right;
    }
    
    // If the heights are equal, the tree is a perfect binary tree.
    // We can calculate the number of nodes directly with the formula 2^h - 1.
    if (leftHeight == rightHeight) {
        return (1 << leftHeight) - 1; // 2^leftHeight - 1
    } else {
        // If not a perfect binary tree, recursively count nodes in subtrees.
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}