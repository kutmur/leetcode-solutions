#include "S_3375.h"
#include <set>

int Solution::minOperations(vector<int>& nums, int target) {
    set<int> uniqueValuesGreaterThanTarget;

    for (int num : nums) {
        if (num < target)
            return -1; 
        if (num > target)
            uniqueValuesGreaterThanTarget.insert(num);
    }

    return uniqueValuesGreaterThanTarget.size();
}
