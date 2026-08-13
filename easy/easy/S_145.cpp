#include "S_145.h"

void Solution::dfs(TreeNode* root, std::vector<int>& result) {
    if (root == nullptr) return;

    dfs(root->left, result);
    dfs(root->right, result);

    result.push_back(root->val);
}

std::vector<int> Solution::postorderTraversal(TreeNode* root) {
    std::vector<int> result;

    dfs(root, result);

    return result;
}