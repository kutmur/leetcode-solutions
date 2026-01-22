#include "S_72.h"

using namespace std;

int Solution::minDistance(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();

    // dp[i][j] will be the minimum edit distance between the first i characters of word1
    // and the first j characters of word2.
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // Base Case 1: Transforming word1[0...i] to an empty string requires i deletions.
    for (int i = 0; i <= n; i++)
        dp[i][0] = i;

    // Base Case 2: Transforming an empty string to word2[0...j] requires j insertions.
    for (int j = 0; j <= m; j++)
        dp[0][j] = j;

    // Iterate through the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // If characters match, no operation is needed; inherit the cost from the diagonal.
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                // If characters mismatch, we take the minimum cost of the three possible operations
                // and add 1 (the cost of the current operation).
                dp[i][j] = 1 + min({
                    dp[i - 1][j],     // Deletion: Remove char from word1
                    dp[i][j - 1],     // Insertion: Add char to word1 (to match word2)
                    dp[i - 1][j - 1]  // Replacement: Swap char in word1
                });
            }
        }
    }

    return dp[n][m];
}