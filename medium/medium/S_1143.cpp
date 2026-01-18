#include "S_1143.h"

int Solution::longestCommonSubsequence(std::string text1, std::string text2) {
    int m = text1.length();
    int n = text2.length();

    // dp[i][j] stores the length of LCS of text1[0..i-1] and text2[0..j-1]
    // Dimensions are (m+1) x (n+1) to handle the empty string base case naturally.
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            // Characters match: Extend the sequence found without these characters (diagonal)
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } 
            // Characters don't match: Carry over the maximum length found so far
            // by either skipping the current char of text1 or the current char of text2.
            else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}