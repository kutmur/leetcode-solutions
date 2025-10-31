#ifndef S_16_H
#define S_16_H

#include <vector>

class Solution {
public:
    /**
     * @brief Finds three integers in nums such that the sum is closest to target.
     * * This method uses a brute-force O(n^3) approach to check all
     * possible triplets.
     * * @param nums A vector of integers.
     * @param target The target integer.
     * @return The sum of the three integers that is closest to the target.
     */
    int threeSumClosest(std::vector<int>& nums, int target);
};

#endif // S_16_H