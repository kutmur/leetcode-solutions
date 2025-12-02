#include "S_1004.h"

int Solution::longestOnes(vector<int>& nums, int k) {
    int left = 0, right = 0, zeros = 0, maxLen = 0;

    while (right < nums.size()) {
        if (nums[right] == 0)
            zeros++;

        while (zeros > k) {
            if (nums[left] == 0)
                zeros--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
        right++;
    }

    return maxLen;
}
