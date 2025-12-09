#include "S_3583.h"

int Solution::specialTriplets(vector<int>& nums) {
    const long long MOD = 1e9 + 7;
    unordered_map<long long, long long> leftCount, rightCount;

    // Initialize rightCount with the frequency of all elements
    for (long long x : nums) rightCount[x]++;

    long long ans = 0;

    for (long long x : nums) {
        // Remove current element from rightCount as we process it (it becomes the middle element)
        rightCount[x]--;

        long long target = x * 2;

        // Count occurrences of target (2*x) to the left and right
        long long left = leftCount[target];
        long long right = rightCount[target];

        // Add the number of valid triplets formed by the current middle element
        ans = (ans + (left * right) % MOD) % MOD;

        // Add current element to leftCount for future iterations
        leftCount[x]++;
    }

    return ans;
}