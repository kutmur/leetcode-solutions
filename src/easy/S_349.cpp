#include "S_349.h"
#include <unordered_set>

std::vector<int> Solution::intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_set<int> result;
    for (int a : nums1) {
        for (int b : nums2) {
            if (a == b) {
                result.insert(a);
            }
        }
    }
    return std::vector<int>(result.begin(), result.end());
}
