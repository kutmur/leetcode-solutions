#include "S_1372.h"

void Solution::solve(TreeNode* node, bool fromLeft, int steps) {
    if (node == nullptr) {
        return;
    }

    // The length of the path ending at the parent of the current 'node' is 'steps'.
    // We update maxLen with this path length.
    maxLen = std::max(maxLen, steps);

    if (fromLeft) {
        // The previous move was LEFT.
        // To continue the zigzag, the next move must be RIGHT.
        solve(node->right, false, steps + 1);
        
        // We can also start a NEW zigzag path from the current node by going LEFT.
        // This new path has a length of 1.
        solve(node->left, true, 1);
    } else { // Came from a right move
        // The previous move was RIGHT.
        // To continue the zigzag, the next move must be LEFT.
        solve(node->left, true, steps + 1);
        
        // We can also start a NEW zigzag path from the current node by going RIGHT.
        // This new path has a length of 1.
        solve(node->right, false, 1);
    }
}

int Solution::longestZigZag(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    
    // The problem defines the length as the number of edges. 
    // A path of length 0 exists by default. The member `maxLen` is initialized to 0.
    
    // Start the recursive search from the root's children.
    // A path starting with root->left has length 1. The move was 'left'.
    solve(root->left, true, 1);
    // A path starting with root->right has length 1. The move was 'right'.
    solve(root->right, false, 1);
    
    return maxLen;
}