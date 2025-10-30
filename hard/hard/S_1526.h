#ifndef S_1526_H
#define S_1526_H

#include <vector>

class Solution {
public:
    /**
     * @brief Calculates the minimum number of increment operations on subarrays
     * to form the target array.
     * * This solution uses a greedy approach, summing the initial value and all
     * positive differences between adjacent elements.
     *
     * @param target A reference to a vector of integers representing the target array.
     * @return int The minimum number of operations required.
     */
    int minNumberOperations(std::vector<int>& target);
};

#endif // S_1526_H