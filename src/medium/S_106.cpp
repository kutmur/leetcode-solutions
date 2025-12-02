#include "S_106.h"

/**
 * @brief Constructs a binary tree from inorder and postorder traversal arrays.
 * * The main idea is to use the postorder traversal to find the root of any subtree
 * and the inorder traversal to determine the elements in the left and right subtrees.
 * * 1. The last element of the postorder array is the root of the entire tree.
 * 2. Find this root in the inorder array. All elements to the left of the root
 * in the inorder array belong to the left subtree, and all elements to the right
 * belong to the right subtree.
 * 3. Recursively apply this logic to build the left and right subtrees.
 * 4. A hash map is used to store the indices of elements in the inorder array
 * for efficient O(1) lookups.
 */
TreeNode* Solution::buildTree(std::vector<int>& inorder, std::vector<int>& postorder) {
    // Map to store the index of each value in the inorder traversal for quick lookup.
    std::unordered_map<int, int> inorderIndexMap;
    int totalNodes = inorder.size();
  
    for (int i = 0; i < totalNodes; ++i) {
        inorderIndexMap[inorder[i]] = i;
    }
  
    // Lambda function for recursively building the tree.
    // It takes the start indices of the current segments and the size of the subtree.
    std::function<TreeNode*(int, int, int)> buildSubtree = 
        [&](int inorderStart, int postorderStart, int subtreeSize) -> TreeNode* {
        
        // Base case: If there are no nodes to create, return null.
        if (subtreeSize <= 0) {
            return nullptr;
        }
      
        // The root of the current subtree is the last element in its postorder segment.
        int rootValue = postorder[postorderStart + subtreeSize - 1];
      
        // Find the root's index in the inorder traversal to partition left/right subtrees.
        int rootIndexInorder = inorderIndexMap[rootValue];
      
        // Calculate the number of nodes in the left subtree.
        int leftSubtreeSize = rootIndexInorder - inorderStart;
      
        // Recursively build the left child.
        // The inorder segment starts at inorderStart.
        // The postorder segment starts at postorderStart.
        TreeNode* leftChild = buildSubtree(inorderStart, postorderStart, leftSubtreeSize);
      
        // Calculate the number of nodes in the right subtree.
        int rightSubtreeSize = subtreeSize - leftSubtreeSize - 1;

        // Recursively build the right child.
        // The inorder segment starts right after the root.
        // The postorder segment for the right child starts after the left child's segment.
        TreeNode* rightChild = buildSubtree(rootIndexInorder + 1, 
                                            postorderStart + leftSubtreeSize, 
                                            rightSubtreeSize);
      
        // Create the new node with its children and return it.
        return new TreeNode(rootValue, leftChild, rightChild);
    };
  
    // Kick off the recursion for the entire tree.
    return buildSubtree(0, 0, totalNodes);
}