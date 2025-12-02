#include "S_1827.h"

int Solution::minOperations(std::vector<int>& nums) {
    int counter = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] >= nums[i + 1]) {
            int increment = nums[i] - nums[i + 1] + 1;
            nums[i + 1] += increment;
            counter += increment;
        }
    }
    return counter;
}
