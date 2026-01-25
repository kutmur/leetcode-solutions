#include "S_1984.h"

int Solution::minimumDifference(std::vector<int>& nums, int k) {
    // Edge case: If we only pick 1 element, the difference is always 0.
    if (k <= 1) {
        return 0;
    }

    int n = nums.size();
    
    // Sorting brings numerically close elements together.
    // This transforms the problem into finding the minimum range 
    // of a contiguous subarray of size k.
    std::sort(nums.begin(), nums.end());

    int result = INT_MAX;

    // Iterate through the sorted array using a sliding window of size k.
    // The "range" of a sorted window is simply (last_element - first_element).
    for (int i = 0; i + k - 1 < n; i++) {
        int currentDifference = nums[i + k - 1] - nums[i];
        if (currentDifference < result) {
            result = currentDifference;
        }
    }

    return result;
}