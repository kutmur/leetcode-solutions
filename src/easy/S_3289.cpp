#include "S_3289.h"
#include <algorithm>

std::vector<int> Solution::getSneakyNumbers(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int counter = 0;
    for (size_t i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums[counter] = nums[i];
            counter++;
        }
    }
    return {nums[0], nums[1]};
}
