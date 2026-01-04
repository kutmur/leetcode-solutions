#include "S_1390.h"

int Solution::sumFourDivisors(std::vector<int>& nums) {
    int totalResult = 0;
    // Memoization to store the sum of divisors for numbers we've already processed.
    // Key: Number, Value: Sum of divisors (if count is 4, else 0).
    std::unordered_map<int, int> memo;

    for (int num : nums) {
        // Optimization: Check if we have processed this number before
        if (memo.count(num)) {
            totalResult += memo[num];
            continue;
        }

        int currentSum = 0;
        int divisorCount = 0;
        int limit = std::sqrt(num);

        // Iterate to find divisors up to the square root
        // Note: Logic adapted to iterate upwards for standard readability, 
        // though user's original downward iteration is also valid.
        for (int i = 1; i <= limit; ++i) {
            if (num % i == 0) {
                // Add the divisor
                currentSum += i;
                divisorCount++;

                // Add the corresponding pair divisor if it's distinct
                if (i != num / i) {
                    currentSum += num / i;
                    divisorCount++;
                }
            }
            // Optimization: If we exceed 4 divisors, we can stop early
            if (divisorCount > 4) break;
        }

        // If exactly 4 divisors were found, add to result and cache valid sum
        if (divisorCount == 4) {
            memo[num] = currentSum;
            totalResult += currentSum;
        } else {
            // Cache as 0 so we don't re-calculate for this number
            memo[num] = 0;
        }
    }

    return totalResult;
}