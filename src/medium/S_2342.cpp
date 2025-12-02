#include "S_2342.h"

//{
//    unordered_map<int, int> digitSumToMaxNum;
//    int maxPairSum = -1;
//
//    for (int currentNum : inputNums)
//    {
//        int currentDigitSum = calculateDigitSum(currentNum);
//
//
//        if (digitSumToMaxNum.find(currentDigitSum) != digitSumToMaxNum.end())
//        {
//            maxPairSum = max(maxPairSum, digitSumToMaxNum[currentDigitSum] + currentNum);
//
//            digitSumToMaxNum[currentDigitSum] = max(digitSumToMaxNum[currentDigitSum], currentNum);
//        }
//        else
//            digitSumToMaxNum[currentDigitSum] = currentNum;
//    }
//    return maxPairSum;
//    }
//
//private:
//    int calculateDigitSum(int numToSum)
//    {
//        int digitSumResult = 0;
//        while (numToSum > 0)
//        {
//            digitSumResult += numToSum % 10;
//            numToSum /= 10;
//        }
//        return digitSumResult;
//    }