#include "S_637.h"
using namespace std;

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            double currSum = 0;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front(); q.pop();
                currSum += node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currSum / levelSize);
        }

        return result;
    }
};
