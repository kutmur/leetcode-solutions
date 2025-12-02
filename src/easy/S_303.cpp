#include "S_303.h"

// Constructor implementation
NumArray::NumArray(std::vector<int>& nums) {
    // Copy the input vector into the member variable.
    numbers = nums;
}

// sumRange method implementation
int NumArray::sumRange(int left, int right) {
    // Initialize an accumulator for the sum.
    int temp = 0;
    
    // Iterate through the specified range and add each element to the sum.
    for(int i = left; i <= right; i++){
        temp += numbers[i];
    }
    
    // Return the final sum.
    return temp;
}

/**
 * Example Usage:
 * 
 * #include <iostream>
 * 
 * int main() {
 *     std::vector<int> nums = {-2, 0, 3, -5, 2, -1};
 *     NumArray* obj = new NumArray(nums);
 * 
 *     // Calculate sum of range [0, 2] -> (-2 + 0 + 3) = 1
 *     int param_1 = obj->sumRange(0, 2);
 *     std::cout << "Sum of range [0, 2]: " << param_1 << std::endl; // Output: 1
 * 
 *     // Calculate sum of range [2, 5] -> (3 + -5 + 2 + -1) = -1
 *     int param_2 = obj->sumRange(2, 5);
 *     std::cout << "Sum of range [2, 5]: " << param_2 << std::endl; // Output: -1
 * 
 *     // Calculate sum of range [0, 5] -> (-2 + 0 + 3 + -5 + 2 + -1) = -3
 *     int param_3 = obj->sumRange(0, 5);
 *     std::cout << "Sum of range [0, 5]: " << param_3 << std::endl; // Output: -3
 * 
 *     delete obj;
 *     return 0;
 * }
 */