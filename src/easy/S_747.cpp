#include "S_747.h"
#include <algorithm>

int Solution::dominantIndex(std::vector<int>& nums) {
    std::vector<int> copy = nums;
    std::sort(nums.begin(), nums.end());
    
    if (nums[nums.size() - 1] >= 2 * nums[nums.size() - 2])
        return std::find(copy.begin(), copy.end(), nums[nums.size() - 1]) - copy.begin();
    else
        return -1;
}
