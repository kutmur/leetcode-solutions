#include "S_872.h"

void getLeafValues(TreeNode* node, vector<int>& leaves) 
{
    if (!node) return;

    if (!node->left && !node->right)
        leaves.push_back(node->val); 

    getLeafValues(node->left, leaves);
    getLeafValues(node->right, leaves);
}

bool Solution::leafSimilar(TreeNode* root1, TreeNode* root2) 
{
    vector<int> leafValues1, leafValues2;
    getLeafValues(root1, leafValues1);
    getLeafValues(root2, leafValues2);
    return leafValues1 == leafValues2;
}
