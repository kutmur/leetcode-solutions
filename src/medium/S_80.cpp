#include "S_80.h"
using std::vector;

int Solution::removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int n : nums)
        if (i < 2 || n != nums[i-2])
            nums[i++] = n;
    return i;
}
