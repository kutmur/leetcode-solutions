#include "S_450.h"

TreeNode* Solution::findMin(TreeNode* node) {
    while (node != nullptr && node->left != nullptr) {
        node = node->left;
    }
    return node;
}

TreeNode* Solution::deleteNode(TreeNode* root, int key) {
    // Base case: If the tree is empty, return nullptr.
    if (root == nullptr) {
        return nullptr;
    }

    // Recur down the tree to find the node.
    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with the key has been found.
        
        // Case 1: Node with only one child or no child.
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp; // The right child (or nullptr) becomes the new root.
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp; // The left child becomes the new root.
        }
        
        // Case 2: Node with two children.
        // Get the inorder successor (smallest in the right subtree).
        TreeNode* successor = findMin(root->right);
        
        // Copy the inorder successor's value to this node.
        root->val = successor->val;
        
        // Delete the inorder successor from the right subtree.
        root->right = deleteNode(root->right, successor->val);
    }
    
    return root;
}