#include "S_104.h"
#include <algorithm>
using namespace std;

int getMax(TreeNode* node) {
    if (!node) return 0;

    int left = getMax(node->left);
    int right = getMax(node->right);
    return max(left, right) + 1;
}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return getMax(root);
    }
};
