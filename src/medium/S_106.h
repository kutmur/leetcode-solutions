#ifndef S_106_H
#define S_106_H

#include <vector>
#include <unordered_map>
#include <functional>

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
     * @brief Constructs a binary tree from inorder and postorder traversal arrays.
     * * @param inorder The inorder traversal of the tree.
     * @param postorder The postorder traversal of the tree.
     * @return TreeNode* The root of the constructed binary tree.
     */
    TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& postorder);
};

#endif // S_106_H