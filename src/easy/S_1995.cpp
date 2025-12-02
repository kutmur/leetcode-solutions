#include "S_1995.h"
#include <unordered_map>

int Solution::countQuadruplets(std::vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int c = n - 2; c >= 2; c--) {
        std::unordered_map<int, int> freq;

        // Count all possible differences nums[d] - nums[c] for d > c
        for (int d = c + 1; d < n; d++) {
            int diff = nums[d] - nums[c];
            freq[diff]++;
        }

        // Check all pairs (a, b) such that a < b < c
        for (int a = 0; a < c; a++) {
            for (int b = a + 1; b < c; b++) {
                int sum = nums[a] + nums[b];
                if (freq.count(sum)) {
                    count += freq[sum];
                }
            }
        }
    }

    return count;
}
