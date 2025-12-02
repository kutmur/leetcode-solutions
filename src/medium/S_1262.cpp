#include "S_1262.h"

using namespace std;

int Solution::maxSumDivThree(vector<int>& nums) {
    int n = nums.size();
    const int INF = 1 << 30;  // Large negative value to represent impossible states
  
    // dp[i][j] represents the maximum sum using first i elements 
    // where the sum modulo 3 equals j
    // Note: Standard C++ requires vectors for dynamic sizes, or 'n' to be const for raw arrays.
    // For this implementation, we will use a vector of vectors to ensure standard compliance,
    // or assume VLA support (compiler extension). 
    // Here, I will convert the raw array to a vector for safety in standard C++.
    vector<vector<int>> dp(n + 1, vector<int>(3));
  
    // Base case: with 0 elements, only sum 0 is possible
    dp[0][0] = 0;
    dp[0][1] = -INF;  // Impossible to get remainder 1 with no elements
    dp[0][2] = -INF;  // Impossible to get remainder 2 with no elements
  
    // Process each element
    for (int i = 1; i <= n; ++i) {
        int currentNum = nums[i - 1];
      
        // For each possible remainder when divided by 3
        for (int remainder = 0; remainder < 3; ++remainder) {
            // Option 1: Don't include current number
            int excludeCurrent = dp[i - 1][remainder];
          
            // Option 2: Include current number
            // We need previous sum with remainder that, when added to currentNum,
            // gives us the target remainder
            int prevRemainder = (remainder - currentNum % 3 + 3) % 3;
            int includeCurrent = dp[i - 1][prevRemainder] + currentNum;
          
            // Take maximum of both options
            dp[i][remainder] = max(excludeCurrent, includeCurrent);
        }
    }
  
    // Return maximum sum divisible by 3 (remainder = 0)
    return dp[n][0];
}