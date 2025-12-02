#ifndef S_2462_H
#define S_2462_H

#include <vector>
#include <queue>
#include <climits>

class Solution {
public:
    /**
     * @brief Calculates the total cost to hire k workers based on candidate selection rules.
     * 
     * @param costs A vector of integers representing the cost to hire each worker.
     * @param k The total number of workers to hire.
     * @param candidates The number of workers to consider from each end of the list.
     * @return long long The minimum total cost to hire k workers.
     */
    long long totalCost(std::vector<int>& costs, int k, int candidates);
};

#endif // S_2462_H