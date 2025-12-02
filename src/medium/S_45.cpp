#include "S_45.h"

int Solution::jump(std::vector<int>& nums) {
    // If the array has 1 or 0 elements, no jumps are needed.
    if (nums.size() <= 1) {
        return 0;
    }

    int jumps = 0;      // The total number of jumps made.
    int end = 0;        // The end of the range for the current jump.
    int farthest = 0;   // The farthest point reachable from the current range.

    // Iterate up to the second-to-last element.
    // We don't need to jump from the last element.
    for (int i = 0; i < nums.size() - 1; i++) {
        // Update the farthest point we can reach.
        farthest = std::max(farthest, i + nums[i]);

        // If we've reached the end of the current jump's range...
        if (i == end) {
            // ...we must make another jump.
            jumps++;
            // The new range ends at the farthest point we found.
            end = farthest;

            // Optimization: if the new end can reach or surpass the goal,
            // we can return early.
            if (end >= nums.size() - 1) {
                return jumps;
            }
        }
    }

    return jumps;
}