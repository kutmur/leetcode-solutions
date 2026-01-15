#pragma once
#include <vector>
#include <iostream>

class Solution {
public:
    /**
     * Calculates the number of ways to roll n dice with k faces to achieve a specific target sum.
     * * @param n Number of dice
     * @param k Number of faces per die
     * @param target The target sum to achieve
     * @return The number of ways modulo 10^9 + 7
     */
    int numRollsToTarget(int n, int k, int target);
};