#include "S_1389.h"  

std::vector<int> Solution::createTargetArray(std::vector<int>& nums, std::vector<int>& index) {  
    std::vector<int> target;  
    for (int i = 0; i < nums.size(); ++i) {  
        target.insert(target.begin() + index[i], nums[i]);  
    }  
    return target;  
}  