// S_543.cpp
#include "S_543.h"

/**
 * @brief A recursive helper function (Depth-First Search) to compute the diameter.
 * 
 * This function serves a dual purpose:
 * 1. It returns the height of the subtree rooted at `curr`. The height is defined
 *    as the number of edges on the longest path from `curr` down to a leaf node.
 * 2. As a side effect, it calculates the diameter passing through `curr`
 *    (which is the sum of the heights of its left and right subtrees) and
 *    updates the global maximum diameter `res` if needed.
 * 
 * @param curr A pointer to the current node in the traversal.
 * @return The height of the subtree rooted at `curr`.
 */
int Solution::dfs(TreeNode* curr) {
    if (curr == nullptr) {
        // Base case: The height of a null tree is 0.
        return 0;
    }

    // Recursively find the height of the left and right subtrees.
    int left = dfs(curr->left);
    int right = dfs(curr->right);

    // The diameter at the current node is the sum of the heights of its left and right subtrees.
    // We update the overall maximum diameter found so far.
    // The `std::max` is included via the header file.
    res = std::max(res, left + right);

    // The height of the current node's subtree is 1 (for the current node/edge)
    // plus the height of its taller child subtree.
    return 1 + std::max(left, right);
}

/**
 * @brief Public method to find the diameter of the binary tree.
 * 
 * @param root The root of the binary tree.
 * @return The maximum diameter found.
 */
int Solution::diameterOfBinaryTree(TreeNode* root) {
    // Kick off the DFS from the root. The return value is the height of the whole tree,
    // which we don't need here. We are interested in the `res` member variable,
    // which is updated by side effect within the `dfs` calls.
    dfs(root);
    return res;
}