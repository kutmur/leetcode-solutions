#ifndef S_303_H
#define S_303_H

#include <vector>

/**
 * @class NumArray
 * @brief Handles range sum queries on an immutable array.
 * 
 * This class is initialized with a vector of numbers.
 * The sumRange method calculates the sum of elements between two given indices.
 * This implementation uses a simple iterative approach for sumRange.
 */
class NumArray {
private:
    // Stores a copy of the numbers provided at initialization.
    std::vector<int> numbers;

public:
    /**
     * @brief Constructs a NumArray object.
     * @param nums A vector of integers. The data is copied.
     */
    NumArray(std::vector<int>& nums);
    
    /**
     * @brief Calculates the sum of the elements from index left to right, inclusive.
     * @param left The starting index of the range.
     * @param right The ending index of the range.
     * @return The sum of the elements in the specified range.
     */
    int sumRange(int left, int right);
};

#endif // S_303_H