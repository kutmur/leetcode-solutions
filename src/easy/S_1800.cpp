#include "S_1800.h"

//{
//
//    if (nums.size() == 1)
//        return nums[0];
//
//    int i = 1;
//    int maxSum = 0;
//
//    while (i < nums.size())
//    {
//        int sum = nums[i - 1];
//        int tmp = i;
//
//        while (i < nums.size() && nums[i - 1] < nums[i])
//        {
//            sum += nums[i];
//            i++;
//        }
//
//        maxSum = max(maxSum, sum);
//
//        if (i == tmp)
//            i++;
//    }
//    return maxSum;
//    }