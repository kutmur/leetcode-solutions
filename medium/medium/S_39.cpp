#include "S_39.h"

std::vector<std::vector<int>> Solution::combinationSum(std::vector<int>& candidates, int target) {
    // Reset state for new calls
    result.clear();
    current.clear();
    
    // Sorting is crucial for the pruning optimization (candidates[i] > target)
    std::sort(candidates.begin(), candidates.end());
    
    // Start DFS from the first index
    dfs(0, candidates, target);
    
    return result;
}

void Solution::dfs(int index, std::vector<int>& candidates, int target) {
    // Base Case: Target met
    if (target == 0) {
        result.push_back(current);
        return;
    }

    // Iterate through candidates starting from 'index' to avoid duplicates
    // and allow reusing the same element (i remains the same in recursive call)
    for (int i = index; i < candidates.size(); i++) {
        // Optimization: If current number exceeds target, larger numbers will too
        // (because the array is sorted)
        if (candidates[i] > target) {
            return;
        }

        // Action: Choose the candidate
        current.push_back(candidates[i]);
        
        // Recurse: Note we pass 'i' (not i+1) because we can reuse the same element
        dfs(i, candidates, target - candidates[i]);
        
        // Backtrack: Remove the candidate to explore other branches
        current.pop_back();
    }
}