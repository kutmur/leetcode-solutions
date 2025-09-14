#include "S_700.h"
#include <queue>

TreeNode* Solution::searchBST(TreeNode* root, int val) {
    if (root == nullptr) {
        return nullptr;
    }
    
    std::queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();

        if(node->val == val){
            return node;
        }

        if(node->left != nullptr){
            q.push(node->left);
        }
        if(node->right != nullptr){
            q.push(node->right);
        }
    }
    
    return nullptr;
}