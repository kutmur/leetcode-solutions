#ifndef S_1372_H
#define S_1372_H

#include <algorithm> // For std::max

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    /**
     * @brief Calculates the length of the longest zigzag path in a binary tree.
     * 
     * A zigzag path is defined as a sequence of nodes in which each move alternates
     * between left and right.
     * 
     * @param root The root of the binary tree.
     * @return The length of the longest zigzag path. The length is the number of edges.
     */
    int longestZigZag(TreeNode* root);

private:
    // A member variable to store the maximum length found during the traversal.
    int maxLen = 0;

    /**
     * @brief A recursive helper function to perform DFS and find zigzag paths.
     * 
     * @param node The current node in the traversal.
     * @param fromLeft A boolean indicating the direction of the move that led to this node.
     *                 `true` if the previous move was left, `false` if it was right.
     * @param steps The length of the current zigzag path ending at `node`.
     */
    void solve(TreeNode* node, bool fromLeft, int steps);
};

#endif // S_1372_H