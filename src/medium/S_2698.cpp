#include "S_2698.h"
#include <string>

//bool Solution::isPartitionValid(int originalNum, std::string squareStr, int targetNum, int startIndex, int currentSum) {
//    if (startIndex == squareStr.size())
//        return currentSum == targetNum;
//    int currentVal = 0;
//    for (int idx = startIndex; idx < squareStr.size(); ++idx) {
//        currentVal = currentVal * 10 + (squareStr[idx] - '0');
//        if (isPartitionValid(originalNum, squareStr, targetNum, idx + 1, currentSum + currentVal))
//            return true;
//    }
//    return false;
//}
//
//int Solution::punishmentNumber(int n) {
//    int punishmentSum = 0;
//    for (int num = 1; num <= n; ++num) {
//        int squaredNum = num * num;
//        if (isPartitionValid(num, std::to_string(squaredNum), num))
//            punishmentSum += squaredNum;
//    }
//    return punishmentSum;
//}