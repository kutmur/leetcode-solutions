#include "S_4.h"
#include <algorithm>

using std::vector;

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // 1) Merge
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    // 2) Sort
    std::sort(nums1.begin(), nums1.end());

    // 3) Median
    int n = static_cast<int>(nums1.size());
    if (n % 2 == 0) {
        return (nums1[n / 2] + nums1[n / 2 - 1]) / 2.0;
    } else {
        return nums1[n / 2];
    }
}
