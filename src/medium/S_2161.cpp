// S_2161.cpp

#include "S_2161.h"
#include <iostream>

std::vector<int> Solution::pivotArray(std::vector<int>& nums, int pivot) {
    std::vector<int> smaller, equal, greater;

    for (int num : nums) {
        if (num < pivot)
            smaller.push_back(num);
        else if (num == pivot)
            equal.push_back(num);
        else
            greater.push_back(num);
    }

    std::vector<int> result;
    result.insert(result.end(), smaller.begin(), smaller.end());
    result.insert(result.end(), equal.begin(), equal.end());
    result.insert(result.end(), greater.begin(), greater.end());

    return result;
}

// Optional test main
int main() {
    Solution sol;
    std::vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    std::vector<int> result = sol.pivotArray(nums, pivot);

    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
