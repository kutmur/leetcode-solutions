#include "S_1458.h"

using namespace std;

int Solution::maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();

    // Initialize with a sufficiently small number ensuring it doesn't underflow when adding positive products,
    // but acts as negative infinity relative to valid dot products.
    const int NEG_INF = -1e9;
    
    // dp[j] stores the max dot product ending at or before index j of nums2 
    // considering elements up to the previous index of nums1.
    vector<int> dp(n, NEG_INF);

    for (int i = 0; i < m; i++) {
        vector<int> newDp(n, NEG_INF);
        for (int j = 0; j < n; j++) {
            int product = nums1[i] * nums2[j];

            // Option 1: Take the current product (start fresh or extend previous best)
            int takeBoth = product;
            if (j > 0 && dp[j - 1] != NEG_INF) {
                // If extending, we add to the best result found at (i-1, j-1)
                takeBoth = max(takeBoth, dp[j - 1] + product);
            }

            // Option 2: Skip nums2[j] (carry forward state from i, j-1)
            int skipNums2 = (j > 0 ? newDp[j - 1] : NEG_INF);

            // Option 3: Skip nums1[i] (carry forward state from i-1, j)
            int skipNums1 = dp[j];

            newDp[j] = max({takeBoth, skipNums1, skipNums2});
        }
        // Update dp array for the next iteration of nums1
        dp = newDp;
    }

    return dp[n - 1];
}