#include "S_977.h"

//{
//
//    vector <int> temp(nums.begin(), nums.end());
//
//    for (int i = 0; i < nums.size(); i++)
//    {
//        temp[i] = nums[i] * nums[i];
//    }
//
//    for (int i = 0; i < nums.size(); i++)
//    {
//        int smallest = 2147483647;
//        int dex = 0;
//        for (int j = 0; j < temp.size(); j++)
//        {
//            if (temp[j] <= smallest)
//            {
//                smallest = temp[j];
//                dex = j;
//            }
//        }
//        nums[i] = smallest;
//        temp.erase(temp.begin() + dex);
//    }
//    return nums;
//    }