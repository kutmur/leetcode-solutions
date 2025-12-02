#include "S_2475.h"
#include <vector>
#include <unordered_map>

int Solution::unequalTriplets(std::vector<int>& nums) {
    // 1. Count the frequency of each number.
    std::unordered_map<int, int> freq;
    for (int x : nums)
        freq[x]++;

    // 2. Extract just the frequencies into a list.
    // The actual values of the numbers don't matter, only their counts.
    std::vector<int> f;
    for (auto& p : freq)
        f.push_back(p.second);

    int total = nums.size();
    int left = 0; // Count of numbers processed so far
    int ans = 0;  // Total number of unequal triplets

    // 3. Iterate through the frequency of each unique number group.
    for (int count : f) {
        // 'count' is the frequency of the current number group (our 'j' in the triplet)
        
        // 'right' is the count of all numbers we haven't processed yet (our 'k')
        int right = total - left - count;
        
        // For the current group (count), any number from the 'left' group
        // and any number from the 'right' group will form an unequal triplet.
        // The number of combinations is left * count * right.
        ans += left * count * right;
        
        // Add the current group's count to 'left' for the next iteration.
        left += count;
    }

    return ans;
}