#include "S_230.h"

int Solution::kthSmallest(TreeNode* root, int k) {
    inorder(root, k);
    return result;
}

void Solution::inorder(TreeNode* node, int k) {
    if (!node) return;

    inorder(node->left, k);

    count++;
    if (count == k) {
        result = node->val;
        return;
    }

    inorder(node->right, k);
}
