#include "S_199.h"

std::vector<int> Solution::rightSideView(TreeNode* root) {
    if (!root) return {};

    std::vector<int> result;
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front(); q.pop();
            if (i + 1 == levelSize) // rightmost node at this level
                result.push_back(node->val);

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }

    return result;
}
