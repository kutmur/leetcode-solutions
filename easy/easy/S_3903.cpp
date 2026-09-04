// File: S_FirstStableIndex.cpp
#include "S_FirstStableIndex.h"
#include <algorithm>
#include <climits>

int Solution::firstStableIndex(std::vector<int>& nums, int k) {
    int result = -1;
    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        int score = get_max(nums, i) - get_min(nums, i);
        if (score <= k) {
            result = i;
            break;
        }
    }
    return result;
}

int Solution::get_max(const std::vector<int>& nums, int i) {
    int result = -1;
    for (int j = 0; j <= i; j++) {
        result = std::max(result, nums[j]);
    }
    return result;
}

int Solution::get_min(const std::vector<int>& nums, int i) {
    int result = INT_MAX;
    for (int j = i; j < static_cast<int>(nums.size()); j++) {
        result = std::min(result, nums[j]);
    }
    
    if (result == INT_MAX) {
        return -1;
    } else {
        return result;
    }
}