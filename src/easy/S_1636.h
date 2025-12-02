#ifndef S_1636_H
#define S_1636_H

#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    /**
     * @brief Sorts an array by the increasing frequency of its elements.
     * * If multiple values have the same frequency, they are sorted in decreasing order.
     * * @param nums The input vector of integers.
     * @return A new vector sorted according to the specified criteria.
     */
    std::vector<int> frequencySort(std::vector<int>& nums);
};

#endif // S_1636_H  