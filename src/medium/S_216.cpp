#include "S_216.h"

std::vector<std::vector<int>> Solution::combinationSum3(int k, int n) {
    std::vector<std::vector<int>> result; 
    std::vector<int> current_combination; 
    
    // Start the backtracking process
    findCombinations(k, n, 1, current_combination, result);
    
    return result;
}

void Solution::findCombinations(
    int k, 
    int target_sum, 
    int start_num,
    std::vector<int>& current_combination, 
    std::vector<std::vector<int>>& result) 
{
    // Base case: a valid combination is found
    if (current_combination.size() == k && target_sum == 0) {
        result.push_back(current_combination);
        return;
    }

    // Pruning case: if the combination is already too long or the sum is negative,
    // this path is invalid.
    if (current_combination.size() > k || target_sum < 0) {
        return;
    }

    // Explore further combinations by trying to add a new number
    for (int i = start_num; i <= 9; ++i) {
        // Choose: add the number to the current combination
        current_combination.push_back(i);

        // Explore: recurse with the updated state
        findCombinations(k, target_sum - i, i + 1, current_combination, result);

        // Un-choose (Backtrack): remove the number to explore other possibilities
        current_combination.pop_back();
    }
}