#pragma once
#include <vector>
#include <unordered_map>

using namespace std;

class FindSumPairs {
private:
    vector<int> nums1;
    vector<int> nums2;
    unordered_map<int, int> freq;

public:
    // Constructor to initialize the arrays and frequency map
    FindSumPairs(vector<int>& nums1, vector<int>& nums2);
    
    // Adds val to nums2[index] and updates frequencies
    void add(int index, int val);
    
    // Counts the number of pairs (i, j) such that nums1[i] + nums2[j] == tot
    int count(int tot);
};