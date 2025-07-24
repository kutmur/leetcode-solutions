#include "S_103.h"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);
    int counter = 1;

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> level;

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front(); q.pop();
            level.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        if (counter % 2 == 0)
            reverse(level.begin(), level.end());

        result.push_back(level);
        counter++;
    }

    return result;
}
