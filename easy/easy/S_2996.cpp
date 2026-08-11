// S_2996.cpp
#include "S_2996.h"
#include <unordered_set>

int Solution::missingInteger(std::vector<int>& nums) {
    std::unordered_set<int> s(nums.begin(), nums.end());

    int sum = nums[0];
    int n = nums.size();

    for (int i = 1; i < n; ++i) {
        if (nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
        } else {
            break;
        }
    }

    while (s.count(sum)) {
        sum++;
    }

    return sum;
}