#include "S_1752.h"


//{
//
//    for (int x = 0; x < nums.size(); x++)
//    {
//        int counter = 0;
//        vector<int> temp(nums.size());
//        for (int i = 0; i < nums.size(); i++)
//        {
//            temp[i] = nums[(i + x) % nums.size()];
//        }
//        for (int i = 0; i < nums.size() - 1; i++)
//        {
//            if (temp[i] <= temp[i + 1])
//                counter++;
//        }
//        if (counter == nums.size() - 1)
//            return true;
//    }
//    return false;
//    }