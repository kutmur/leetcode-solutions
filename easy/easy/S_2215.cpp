#include "S_2215.h"

vector<vector<int>> Solution::findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());

    vector<int> diff1, diff2;

    for (int x : s1)
        if (s2.count(x) == 0)
            diff1.push_back(x);

    for (int x : s2)
        if (s1.count(x) == 0)
            diff2.push_back(x);

    return {diff1, diff2};
}
