#include "S_3194.h"
#include <algorithm>

double Solution::minimumAverage(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int times = nums.size() / 2;
    double average = (nums.front() + nums.back()) / 2.0;
    double temp = 0.0;

    while (times-- > 0) {
        temp = (nums.front() + nums.back()) / 2.0;
        if (temp < average)
            average = temp;
        nums.erase(nums.begin()); // Remove first element
        nums.erase(nums.end() - 1); // Remove last element
    }

    return average;
}
