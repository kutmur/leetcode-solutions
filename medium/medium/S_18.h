#ifndef S_18_H
#define S_18_H

#include <vector>

class Solution {
public:
    /**
     * @brief Finds all unique quadruplets in the array which give the sum of target.
     * * This implementation uses a brute-force O(n^4) approach with a set to 
     * ensure uniqueness of the resulting quadruplets.
     *
     * @param nums A vector of integers.
     * @param target The target integer sum.
     * @return A vector of vectors, where each inner vector is a unique quadruplet
     * that sums to the target.
     */
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);
};

#endif // S_18_H