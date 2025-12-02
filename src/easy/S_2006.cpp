// S_2006.cpp

#include "S_2006.h"
#include <cmath> // for std::abs

int Solution::countKDifference(std::vector<int>& nums, int k) {
    int counter = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (std::abs(nums[i] - nums[j]) == k) {
                counter++;
            }
        }
    }
    return counter;
}
