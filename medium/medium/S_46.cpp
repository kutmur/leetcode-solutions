#include "S_46.h"

using namespace std;

void Solution::backtrack(int index, vector<int>& nums, vector<vector<int>>& result) {
    // Base case: if we have reached the end of the array, add the current permutation
    if (index == nums.size()) {
        result.push_back(nums);
        return;
    }

    // Iterate through the array to create permutations
    for (int i = index; i < nums.size(); i++) {
        // Swap the current element with the element at index i
        swap(nums[index], nums[i]);        
        
        // Recurse for the next index
        backtrack(index + 1, nums, result);
        
        // Backtrack: swap back to restore the original array state
        swap(nums[index], nums[i]);        
    }
}

vector<vector<int>> Solution::permute(vector<int>& nums) {
    vector<vector<int>> result;
    backtrack(0, nums, result);
    return result;
}