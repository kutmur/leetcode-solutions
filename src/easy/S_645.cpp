#include "S_645.h"
#include <cmath> // For std::abs

/**
 * @brief Implements the in-place marking algorithm to find the error numbers.
 * 
 * This method uses the array itself to track seen numbers. It iterates through the
 * array, and for each number `num`, it negates the value at index `abs(num) - 1`.
 * If it encounters a number at an index that is already negative, it means the
 * corresponding `num` is the duplicate. A second pass finds the index with a
 * positive value, which corresponds to the missing number.
 */
std::vector<int> Solution::findErrorNums(std::vector<int>& nums) {
    int duplicate = -1;
    int missing = -1;

    // First pass: Mark numbers as seen by negating the value at the corresponding index.
    // If a value is already negative, we've found the duplicate.
    for (int num : nums) {
        int index = std::abs(num) - 1;
        if (nums[index] < 0) {
            duplicate = std::abs(num);
        } else {
            nums[index] *= -1;
        }
    }

    // Second pass: Find the index where the value is still positive.
    // This index + 1 is the missing number.
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            missing = i + 1;
            break;
        }
    }

    return {duplicate, missing};
}