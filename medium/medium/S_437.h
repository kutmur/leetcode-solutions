#ifndef S_437_H
#define S_437_H

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
private:
    int totalPaths;
    int target;
    std::unordered_map<long long, int> prefixSumCount;

    /**
     * @brief Performs DFS to find paths summing to the target.
     * @param node The current node in the traversal.
     * @param currentPathSum The sum of values from the root to the current node.
     */
    void dfs(TreeNode* node, long long currentPathSum);

public:
    /**
     * @brief Finds the number of paths that sum to a given value.
     * The path does not need to start or end at the root or a leaf, but it must go downwards.
     * @param root The root of the binary tree.
     * @param targetSum The target sum for the paths.
     * @return The total number of paths that sum to targetSum.
     */
    int pathSum(TreeNode* root, int targetSum);
};

#endif // S_437_H