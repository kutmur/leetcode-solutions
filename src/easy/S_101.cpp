#include "S_101.h"

bool Solution::isSymmetric(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front(); q.pop();
            if (node == nullptr)
                level.push_back(INT_MIN);
            else {
                level.push_back(node->val);
                q.push(node->left);
                q.push(node->right);
            }
        }

        for (int i = 0; i < level.size() / 2; i++) {
            if (level[i] != level[level.size() - 1 - i])
                return false;
        }
    }

    return true;
}
