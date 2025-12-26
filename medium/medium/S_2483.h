#pragma once
#include <string>
#include <algorithm>
#include <climits>

class Solution {
public:
    /**
     * Calculates the best closing time to minimize penalty.
     * * @param customers A string where 'Y' indicates a customer arrival and 'N' indicates no customers.
     * @return The hour (0 to n) that minimizes the penalty.
     */
    int bestClosingTime(std::string customers);
};