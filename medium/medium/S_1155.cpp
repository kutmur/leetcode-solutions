#include "S_1155.h"

int Solution::numRollsToTarget(int n, int k, int target) {
    const int MOD = 1e9 + 7;

    // dp[i] represents the number of ways to get a sum of 'i' using the previous number of dice.
    // Initialize for 0 dice: 0 dice sum to 0 in exactly 1 way.
    std::vector<int> dp(target + 1, 0);
    dp[0] = 1; 

    // Iterate over each die
    for (int dice = 1; dice <= n; dice++) {
        std::vector<int> new_dp(target + 1, 0);

        // Iterate over each possible sum
        for (int sum = 1; sum <= target; sum++) {
            
            // Try every face value for the current die
            for (int face = 1; face <= k; face++) {
                if (sum - face >= 0) {
                    // Transition: Add ways to get (sum - face) using (dice - 1)
                    new_dp[sum] = (new_dp[sum] + dp[sum - face]) % MOD;
                }
            }
        }

        // Move to the next state (rolling space optimization)
        dp = new_dp;
    }

    return dp[target];
}