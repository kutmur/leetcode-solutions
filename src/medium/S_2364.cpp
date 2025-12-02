#include "S_2364.h"

//{
//    long long size = numbers.size();
//    long long totalCombinations = (size * (size - 1)) / 2;
//    unordered_map<int, long long> differenceCount;
//    long long validPairs = 0;
//
//    for (int index = 0; index < size; index++)
//    {
//        int adjustedDifference = numbers[index] - index;
//
//        if (differenceCount.find(adjustedDifference) != differenceCount.end())
//        {
//            validPairs += differenceCount[adjustedDifference];
//        }
//
//        differenceCount[adjustedDifference]++;
//    }
//    return totalCombinations - validPairs;
//    }