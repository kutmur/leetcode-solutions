#include "S_896.h"

bool Solution::isMonotonic(std::vector<int>& nums) {
    bool hasIncreasingStep = false;
    bool hasDecreasingStep = false;

    for (size_t i = 0; i < nums.size() - 1; ++i) {
        if (nums[i] > nums[i + 1]) {
            // Found a step going down
            hasDecreasingStep = true;
        }
        if (nums[i] < nums[i + 1]) {
            // Found a step going up
            hasIncreasingStep = true;
        }

        // Optimization: If we have seen both directions, it cannot be monotonic
        if (hasIncreasingStep && hasDecreasingStep) {
            return false;
        }
    }

    return true;
}