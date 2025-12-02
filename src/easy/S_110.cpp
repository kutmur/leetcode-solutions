#include "S_110.h"

bool Solution::isBalanced(TreeNode* root) {
    // The helper function returns the height if the tree is balanced,
    // and -1 if it's not. We just need to check the final result.
    return checkHeight(root) != -1;
}

int Solution::checkHeight(TreeNode* node) {
    // Base case: An empty tree is balanced and has a height of 0.
    if (node == nullptr) {
        return 0;
    }

    // Recursively check the left subtree.
    // This is post-order traversal: process children before the current node.
    int leftHeight = checkHeight(node->left);
    // If the left subtree is unbalanced, propagate the failure up.
    if (leftHeight == -1) {
        return -1;
    }

    // Recursively check the right subtree.
    int rightHeight = checkHeight(node->right);
    // If the right subtree is unbalanced, propagate the failure up.
    if (rightHeight == -1) {
        return -1;
    }

    // Check if the current node is balanced.
    if (std::abs(leftHeight - rightHeight) > 1) {
        // Mark as unbalanced.
        return -1;
    }

    // If the current node is balanced, return its height.
    return 1 + std::max(leftHeight, rightHeight);
}