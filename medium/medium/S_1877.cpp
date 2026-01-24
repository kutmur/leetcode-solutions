#include "S_1877.h"

int Solution::minPairSum(std::vector<int>& nums) {
    // Step 1: Sort the array to arrange elements in ascending order.
    // This allows us to easily access the smallest and largest available numbers.
    std::sort(nums.begin(), nums.end());
    
    int n = nums.size();
    int maxPairSum = INT_MIN;
    
    // Step 2: Use a greedy approach with two pointers (implicit via index math).
    // We pair the smallest element (nums[i]) with the largest element (nums[n - 1 - i]).
    for(int i = 0; i < n / 2; ++i) {
        int currentPairSum = nums[i] + nums[n - 1 - i];
        maxPairSum = std::max(maxPairSum, currentPairSum);
    }
    
    return maxPairSum;
}