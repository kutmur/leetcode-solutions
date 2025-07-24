#include "S_1161.h"

int Solution::maxLevelSum(TreeNode* root) {
    int maxSum = INT_MIN;
    int maxLevel = 0;

    if (!root)
        return root->val;

    queue<TreeNode*> q;
    q.push(root);

    int level = 1;
    while (!q.empty()) {
        int levelSize = q.size();
        int tempSum = 0;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();
            tempSum += node->val;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        if (tempSum > maxSum) {
            maxSum = tempSum;
            maxLevel = level;
        }

        level++;
    }

    return maxLevel;
}
