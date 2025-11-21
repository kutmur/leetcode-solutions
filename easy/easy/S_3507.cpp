#include "S_3507.h"

int Solution::minimumPairRemoval(vector<int>& nums) {
    int counter = 0;
    
    while (true) {
        // Step 1: Check if the array is already sorted
        bool isNotSorted = false;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                isNotSorted = true;
                break;
            }
        }
        if (!isNotSorted) break;

        // Step 2: Find the adjacent pair with the minimum sum
        long long minSum = LLONG_MAX;
        int index1 = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            long long sum = (long long)nums[i] + nums[i + 1];
            if (sum < minSum) {
                minSum = sum;
                index1 = i;
            }
        }

        // Step 3: Merge the pair
        int merged = nums[index1] + nums[index1 + 1];

        nums.erase(nums.begin() + index1);     // Remove first element of pair
        nums.erase(nums.begin() + index1);     // Remove second element (shifted to index1)
        nums.insert(nums.begin() + index1, merged); // Insert the sum

        counter++;
    }
    
    return counter;
}