#include "S_961.h"

int Solution::repeatedNTimes(std::vector<int>& nums) {
    int n = nums.size() / 2;
    std::unordered_map<int, int> freq;
    
    // Count frequency of all elements
    for(int i : nums) {
        freq[i]++;
    }
    
    // Check which element appears exactly n times
    for(auto& p : freq) {
        if(p.second == n) {
            return p.first;
        }
    }
    
    // Should not reach here based on problem constraints
    return -1;
}