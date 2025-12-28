#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * Finds all unique combinations in candidates where the candidate numbers sum to target.
     * The same repeated number may be chosen from candidates unlimited number of times.
     * * @param candidates Vector of distinct integers.
     * @param target Integer target sum.
     * @return Vector of combinations (vectors).
     */
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target);

private:
    // Internal state for backtracking
    std::vector<std::vector<int>> result;
    std::vector<int> current;

    // Helper for Depth First Search
    void dfs(int index, std::vector<int>& candidates, int target);
};