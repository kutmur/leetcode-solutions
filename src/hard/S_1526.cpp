#include "S_1526.h"

int Solution::minNumberOperations(std::vector<int>& target) {
    // The cost to build the first element from 0
    int result = target[0]; 

    // Iterate from the second element
    for (int i = 1; i < target.size(); ++i) {
        // We only add operations if the current element is TALLER
        // than the previous one.
        if (target[i] > target[i-1]) {
            // The new cost is just the difference, as the operations
            // for target[i-1] can be "extended".
            result += (target[i] - target[i-1]);
        }
        // If target[i] <= target[i-1], the operations for the
        // previous element already cover this one. No cost.
    }
    
    return result;
}