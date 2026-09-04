// File: S_FirstStableIndex.h
#pragma once
#include <vector>

class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k);

private:
    int get_max(const std::vector<int>& nums, int i);
    int get_min(const std::vector<int>& nums, int i);
};