// S_MissingMultiple.cpp
#include "S_MissingMultiple.h"
#include <unordered_set>

int Solution::missingMultiple(std::vector<int>& nums, int k) {
    std::unordered_set<int> seen(nums.begin(), nums.end());
    int i = 1;
    while (seen.count(k * i)) {
        i++;
    }
    return k * i;
}