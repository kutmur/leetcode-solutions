#ifndef S_222_H
#define S_222_H

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
     * @brief Counts the number of nodes in a complete binary tree.
     * * This method leverages the properties of a complete binary tree to achieve
     * a time complexity better than O(n). It checks if a subtree is a perfect
     * binary tree by comparing the heights of its leftmost and rightmost paths.
     * If they are equal, it calculates the node count using the formula 2^h - 1.
     * Otherwise, it recursively counts the nodes in the left and right subtrees.
     * * @param root A pointer to the root of the complete binary tree.
     * @return The total number of nodes in the tree.
     */
    int countNodes(TreeNode* root);
};

#endif // S_222_H