#ifndef S_645_H
#define S_645_H

#include <vector>

class Solution {
public:
    /**
     * @brief Finds the duplicate and missing numbers in a set from 1 to n.
     * 
     * The input array `nums` contains numbers originally from 1 to n, but one number is duplicated
     * and one number is missing. This function finds both.
     * 
     * @param nums A vector of integers.
     * @return A vector containing two integers: [duplicate, missing].
     */
    std::vector<int> findErrorNums(std::vector<int>& nums);
};

#endif // S_645_H