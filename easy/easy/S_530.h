#ifndef S_530_H
#define S_530_H

#include <vector>
#include <algorithm> // For std::min and std::abs
#include <climits>   // For INT_MAX

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
     * @brief Populates a vector with all values from the tree using pre-order traversal.
     * @param currentNode The current node in the traversal.
     * @param valueList The vector to store the node values.
     */
    void populateValues(TreeNode* currentNode, std::vector<int>& valueList);

    /**
     * @brief Finds the minimum absolute difference between the values of any two nodes in the tree.
     * This is a brute-force approach that does not utilize the BST property.
     * @param root The root of the binary search tree.
     * @return The minimum absolute difference.
     */
    int getMinimumDifference(TreeNode* root);
};

#endif // S_530_H