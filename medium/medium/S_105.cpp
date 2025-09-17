#include "S_105.h"

TreeNode* Solution::buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
    // Pre-process the inorder array to create a map for O(1) lookups.
    for (int i = 0; i < inorder.size(); ++i) {
        inorderMap[inorder[i]] = i;
    }
    
    // Reset preorder index in case the Solution object is reused.
    preorderIndex = 0;
    
    // Start the recursive build process with the full range of the inorder array.
    return build(preorder, 0, inorder.size() - 1);
}

TreeNode* Solution::build(const std::vector<int>& preorder, int inLeft, int inRight) {
    // Base case: if the inorder segment is empty, there is no subtree to build.
    if (inLeft > inRight) {
        return nullptr;
    }

    // The current root's value is the next element in the preorder traversal.
    int rootVal = preorder[preorderIndex++];
    TreeNode* root = new TreeNode(rootVal);

    // Find the root's position in the inorder traversal to determine the left and right subtrees.
    int inorderSplitIndex = inorderMap[rootVal];

    // Recursively build the left subtree.
    // The left subtree consists of elements in the inorder array from inLeft to inorderSplitIndex - 1.
    root->left = build(preorder, inLeft, inorderSplitIndex - 1);
    
    // Recursively build the right subtree.
    // The right subtree consists of elements in the inorder array from inorderSplitIndex + 1 to inRight.
    root->right = build(preorder, inorderSplitIndex + 1, inRight);

    return root;
}