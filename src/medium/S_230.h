#ifndef S_230_H
#define S_230_H

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int count = 0;
    int result = -1;

    int kthSmallest(TreeNode* root, int k);

private:
    void inorder(TreeNode* node, int k);
};

#endif
