#pragma once
#include <vector>

class Solution {
public:
    // Returns a list of booleans where answer[i] is true if the binary 
    // representation of the subarray nums[0..i] is divisible by 5.
    std::vector<bool> prefixesDivBy5(std::vector<int>& nums);
};