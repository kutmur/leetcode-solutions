#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the maximum profit achievable given a list of stock prices and a transaction fee.
     * * @param prices Vector of prices where prices[i] is the price of a given stock on the ith day.
     * @param fee The transaction fee for each transaction (buying + selling).
     * @return The maximum profit.
     */
    int maxProfit(std::vector<int>& prices, int fee);
};