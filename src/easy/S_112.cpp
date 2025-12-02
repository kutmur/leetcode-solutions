// S_112.cpp
#include "S_112.h"

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;

        // If it's a leaf, check if the remaining sum equals the node's value
        if (!root->left && !root->right)
            return targetSum == root->val;

        // Otherwise, check left and right subtrees
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
