#pragma once
#include <vector>
#include <algorithm> // Required for swap

class Solution {
public:
    // Helper function for recursion
    void backtrack(int index, std::vector<int>& nums, std::vector<std::vector<int>>& result);
    
    // Main function to generate permutations
    std::vector<std::vector<int>> permute(std::vector<int>& nums);
};