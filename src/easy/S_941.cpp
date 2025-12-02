#include "S_941.h"

//{
//
//    if (arr.size() < 3)
//        return false;
//
//    int peak = 0;
//
//    for (int i = 1; i < arr.size(); i++)
//    {
//        if (arr[i] > arr[i - 1])
//            peak = i;
//
//        else
//            break;
//    }
//
//    if (peak == 0 || peak == arr.size() - 1)
//        return false;
//
//    for (int i = peak; i < arr.size() - 1; i++)
//    {
//        if (arr[i] <= arr[i + 1])
//            return false;
//    }
//    return true;
//    }