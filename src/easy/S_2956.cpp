#include "S_2956.h"

std::vector<int> Solution::findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) {
    int answer1 = 0;
    int answer2 = 0;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                answer1++;
                break;
            }
        }
    }

    for (int k = 0; k < nums2.size(); k++) {
        for (int l = 0; l < nums1.size(); l++) {
            if (nums2[k] == nums1[l]) {
                answer2++;
                break;
            }
        }
    }

    std::vector<int> result;
    result.push_back(answer1);
    result.push_back(answer2);
    return result;
}
