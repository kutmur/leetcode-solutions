#ifndef S_105_H
#define S_105_H

#include <vector>
#include <unordered_map>

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
     * @brief Constructs a binary tree from its preorder and inorder traversals.
     * @param preorder A vector of integers representing the preorder traversal.
     * @param inorder A vector of integers representing the inorder traversal.
     * @return The root of the constructed binary tree.
     */
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder);

private:
    // A map to store the indices of values in the inorder traversal for O(1) lookup.
    std::unordered_map<int, int> inorderMap;
    
    // An index to keep track of the current root in the preorder traversal.
    int preorderIndex = 0;

    /**
     * @brief A recursive helper function to build the tree.
     * @param preorder The preorder traversal vector.
     * @param inLeft The left boundary of the current inorder segment.
     * @param inRight The right boundary of the current inorder segment.
     * @return The root of the constructed subtree.
     */
    TreeNode* build(const std::vector<int>& preorder, int inLeft, int inRight);
};

#endif // S_105_H