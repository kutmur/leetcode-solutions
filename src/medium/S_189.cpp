#include "S_189.h"
#include <vector>

void Solution::rotate(std::vector<int>& nums, int k) {
    int rotate = k % nums.size();
    std::vector<int> duplicate = nums;
    for (int i = 0; i < duplicate.size(); i++)
        nums[(rotate + i) % nums.size()] = duplicate[i];
}
