#include "S_1636.h"

std::vector<int> Solution::frequencySort(std::vector<int>& nums) {
    // Step 1: Count the frequency of each number.
    std::unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }

    // Step 2: Sort the array with a custom comparator.
    sort(nums.begin(), nums.end(), [&](int a, int b) {
        // If frequencies are different, sort by frequency in ascending order.
        if (freq[a] != freq[b]) {
            return freq[a] < freq[b];
        }
        // If frequencies are the same, sort by value in descending order.
        return a > b;
    });

    return nums;
}