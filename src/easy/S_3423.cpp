#include "S_3423.h"
#include <cmath>      // For std::abs
#include <algorithm>  // For std::max

/**
 * The core logic iterates through the array once, making it an O(n) solution.
 * It maintains a running maximum of the difference between adjacent elements.
 */
int Solution::maxAdjacentDistance(std::vector<int>& nums) {
    // Edge case: If there are less than 2 elements, no pairs exist.
    if (nums.size() < 2) {
        return 0;
    }

    int max_diff = 0;

    // Iterate up to the second-to-last element
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        // Find the larger value between the current max_diff and the
        // absolute difference of the current adjacent pair.
        max_diff = std::max(max_diff, std::abs(nums[i] - nums[i + 1]));
    }

    return max_diff;
}