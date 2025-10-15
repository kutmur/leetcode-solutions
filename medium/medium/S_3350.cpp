// S_3350.cpp

#include "S_3350.h"

int Solution::maxIncreasingSubarrays(std::vector<int>& nums) {
    int maxLength = 0;
    int previousLength = 0;
    int currentLength = 0;
    int n = nums.size();

    // It's not possible to have two subarrays if there are fewer than two elements.
    if (n < 2) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        currentLength++;

        // End of an increasing subarray is detected at the last element or when the sequence breaks.
        if (i == n - 1 || nums[i] >= nums[i + 1]) {
            // Update maxLength by considering two cases:
            // 1. Splitting the current subarray: gives two parts of length `currentLength / 2`.
            // 2. Combining with the previous subarray: allows for two parts of length `min(previousLength, currentLength)`.
            maxLength = std::max({maxLength, currentLength / 2, std::min(previousLength, currentLength)});
            
            // Prepare for the next subarray.
            previousLength = currentLength;
            currentLength = 0;
        }
    } 
    return maxLength;
}