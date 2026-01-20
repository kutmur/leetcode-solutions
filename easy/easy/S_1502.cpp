#include "S_1502.h"

bool Solution::canMakeArithmeticProgression(std::vector<int>& arr) {
    // Phase 1: Order the elements to check sequential differences
    std::sort(arr.begin(), arr.end());
    
    // Edge case: Vectors with fewer than 2 elements are technically AP, 
    // but constraints usually specify n >= 2.
    // Based on standard constraints, we proceed assuming valid indices exist.
    
    // Phase 2: Establish the baseline difference
    int diff = arr[1] - arr[0];
    
    // Phase 3: Validate the difference across the entire sequence
    for (size_t i = 1; i < arr.size() - 1; ++i) {
        if (arr[i + 1] - arr[i] != diff) {
            return false;
        }
    }
    
    return true;
}