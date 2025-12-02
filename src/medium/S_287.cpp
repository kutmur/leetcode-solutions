#include "S_287.h"
#include <cmath> // For std::abs

int Solution::findDuplicate(std::vector<int>& nums) {
    for (int num : nums) {
        int idx = std::abs(num) - 1;
        if (nums[idx] < 0) {
            return std::abs(num);
        }
        nums[idx] *= -1;
    }
    return -1; // Should not be reached given problem constraints
}