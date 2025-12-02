#include "S_167.h"

vector<int> Solution167::twoSum(vector<int>& numbers, int target) {
    int l = 0, r = numbers.size() - 1;

    while (l < r) {
        int curSum = numbers[l] + numbers[r];

        if (curSum > target)
            r--;
        else if (curSum < target)
            l++;
        else
            return { l + 1, r + 1 };
    }
    return {};
}
