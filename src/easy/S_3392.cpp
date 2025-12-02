#include "S_3392.h"

int Solution::countSubarrays(std::vector<int>& nums) {
    int counter = 0;
    for (int i = 0; i + 2 < nums.size(); ++i) {
        if (nums[i] + nums[i + 2] == nums[i + 1] / 2.0) {
            counter++;
        }
    }
    return counter;
}
