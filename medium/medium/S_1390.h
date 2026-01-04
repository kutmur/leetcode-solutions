#pragma once
#include <vector>
#include <unordered_map>
#include <cmath>

class Solution {
public:
    /**
     * Calculates the sum of divisors for all integers in the array that have exactly four divisors.
     * * @param nums Reference to the input vector of integers.
     * @return The aggregated sum of divisors for valid numbers.
     */
    int sumFourDivisors(std::vector<int>& nums);
};