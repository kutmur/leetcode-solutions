#pragma once
#include <vector>
#include <algorithm>
#include <numeric> // For std::accumulate if needed, though manual loop is used

class Solution {
public:
    /**
     * Calculates the minimum number of boxes required to store all apples.
     * * @param apple A vector representing the number of apples in each pack.
     * @param capacity A vector representing the capacity of each box.
     * @return The minimum number of boxes needed.
     */
    int minimumBoxes(std::vector<int>& apple, std::vector<int>& capacity);
};