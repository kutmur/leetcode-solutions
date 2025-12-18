#include "S_81.h"

bool Solution::search(std::vector<int>& nums, int target) {
    // Phase 1: Normalization
    // Sorting resolves any rotation or unsorted order, simplifying the
    // problem to a standard binary search. 
    // Complexity Cost: O(N log N)
    std::sort(nums.begin(), nums.end());

    // Phase 2: Binary Search
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;

    while (left <= right) {
        // Prevent integer overflow during midpoint calculation
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return true;
        }
        else if (nums[mid] < target) {
            // Target is in the right half
            left = mid + 1;
        }
        else {
            // Target is in the left half
            right = mid - 1;
        }
    }
    
    return false;
}