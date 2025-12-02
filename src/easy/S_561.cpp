#include "S_561.h"
#include <algorithm>

int Solution::arrayPairSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int result = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        result += nums[i];
    }
    return result;
}
