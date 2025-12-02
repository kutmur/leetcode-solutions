#include "S_169.h"

//int Solution::majorityElement(std::vector<int>& nums) {
//    int majority = nums[0], count = 1;
//    
//    for (int i = 1; i < nums.size(); i++) 
//    {
//        if (nums[i] == majority) 
//            count++; 
//        else
//            count--;
//
//        if (count == 0) 
//        {
//            majority = nums[i]; 
//            count = 1;
//        }
//    }
//    return majority;
//}