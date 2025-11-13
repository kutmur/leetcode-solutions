#include "S_3228.h"

int Solution::maxOperations(std::string s) {
    int totalOperations = 0;  // Accumulates the total operations
    int onesCount = 0;        // Tracks the count of '1's encountered so far
    int stringLength = s.size();
  
    // Iterate through the string
    for (int i = 0; i < stringLength; ++i) {
        if (s[i] == '1') {
            // If it's a '1', just increment the count
            ++onesCount;
        } else if (i > 0 && s[i - 1] == '1') {
            // If it's a '0' AND the previous character was a '1',
            // it means we've hit the end of a block of '1's.
            // This '0' will "block" all '1's we've seen so far,
            // so we add the current onesCount to the total operations.
            totalOperations += onesCount;
        }
    }
  
    return totalOperations;
}