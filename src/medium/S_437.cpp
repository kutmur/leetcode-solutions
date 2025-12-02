#include "S_437.h"

void Solution::dfs(TreeNode* node, long long currentPathSum) {
    if (!node) {
        return;
    }

    // 1. Update the current path sum with the current node's value
    currentPathSum += node->val;

    // 2. Check if (currentPathSum - target) exists in the map
    // This would mean a path from an ancestor to this node sums to the target
    if (prefixSumCount.count(currentPathSum - target)) {
        totalPaths += prefixSumCount[currentPathSum - target];
    }

    // 3. Add the current path sum to the map for descendant nodes to use
    prefixSumCount[currentPathSum]++;

    // 4. Recurse for left and right children
    dfs(node->left, currentPathSum);
    dfs(node->right, currentPathSum);

    // 5. Backtrack: remove the current path sum from the map
    // This is crucial to ensure that paths are only considered in a "parent-child" direction
    // and sums from one branch do not affect sibling branches.
    prefixSumCount[currentPathSum]--;
}

int Solution::pathSum(TreeNode* root, int targetSum) {
    this->target = targetSum;
    this->totalPaths = 0;
    
    // Clear the map for multiple calls if Solution object is reused
    this->prefixSumCount.clear();

    // Base case: A prefix sum of 0 exists (the path before the root)
    // This handles cases where a path starting from the root itself equals the targetSum.
    prefixSumCount[0] = 1;

    dfs(root, 0);

    return totalPaths;
}