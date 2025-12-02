#include "S_236.h"

TreeNode* Solution::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // Base case 1: If the root is null, we can't find anything.
    if (root == nullptr) {
        return nullptr;
    }
    
    // Base case 2: If the root is one of the nodes, it's a potential LCA.
    if (root == p || root == q) {
        return root;
    }
    
    // Recursively search in the left and right subtrees.
    TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
    TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);
    
    // If both left and right subtrees return a non-null result,
    // it means p and q are in different subtrees, so the current root is the LCA.
    if (leftLCA != nullptr && rightLCA != nullptr) {
        return root;
    }
    
    // Otherwise, the LCA must be in the subtree that returned a non-null result.
    // If both are null, this will correctly return null.
    return (leftLCA != nullptr) ? leftLCA : rightLCA;
}