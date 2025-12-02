#include "S_1448.h"

void Solution::dfs(TreeNode* node, int maxValOnPath) {
    // Base case: if the node is null, stop the recursion.
    if (!node) {
        return;
    }

    // A node is "good" if its value is greater than or equal to the max value on the path so far.
    if (node->val >= maxValOnPath) {
        goodNodesCount++;
    }

    // The new maximum for the children's paths is the max of the current path's max 
    // and the current node's value.
    int newMax = std::max(maxValOnPath, node->val);

    // Recurse for the left and right children with the updated maximum value.
    dfs(node->left, newMax);
    dfs(node->right, newMax);
}

int Solution::goodNodes(TreeNode* root) {
    // Reset the count to 0 to handle multiple calls on the same Solution object.
    goodNodesCount = 0;
    
    if (root) {
        // Start the DFS from the root. The initial max value is INT_MIN so that the
        // root node is always counted as a good node.
        dfs(root, INT_MIN);
    }
    
    return goodNodesCount;
}