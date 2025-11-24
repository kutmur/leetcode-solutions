#include "S_1018.h"

using std::vector;

vector<bool> Solution::prefixesDivBy5(vector<int>& nums) {
    vector<bool> result;
    // Reserve space to avoid multiple reallocations since we know the size
    result.reserve(nums.size());
    
    int currentRemainder = 0;
  
    for (int binaryDigit : nums) {
        // Concept: New Number = Old Number * 2 + New Bit
        // We apply modulo at every step to prevent integer overflow.
        // (a * 2 + b) % 5 is equivalent to ((a % 5) * 2 + b) % 5
        currentRemainder = ((currentRemainder << 1) | binaryDigit) % 5;
      
        result.push_back(currentRemainder == 0);
    }
  
    return result;
}