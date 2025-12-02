#include "S_1718.h"

//bool Solution::generateSequence(int currentIndex, int maxNumber)
//{
//    if (currentIndex == sequenceLength) return true;
//    if (finalSequence[currentIndex] != 0) return generateSequence(currentIndex + 1, maxNumber);
//
//    for (int candidate = maxNumber; candidate >= 1; --candidate)
//    {
//        if (!isNumberUsed[candidate])
//        {
//            if (candidate == 1)
//            {
//                finalSequence[currentIndex] = 1;
//                isNumberUsed[1] = true;
//                if (generateSequence(currentIndex + 1, maxNumber)) return true;
//                finalSequence[currentIndex] = 0;
//                isNumberUsed[1] = false;
//            }
//            else
//            {
//                int nextIndex = currentIndex + candidate;
//                if (nextIndex < sequenceLength && finalSequence[nextIndex] == 0)
//                {
//                    finalSequence[currentIndex] = candidate;
//                    finalSequence[nextIndex] = candidate;
//                    isNumberUsed[candidate] = true;
//                    if (generateSequence(currentIndex + 1, maxNumber))
//                        return true;
//                    finalSequence[currentIndex] = 0;
//                    finalSequence[nextIndex] = 0;
//                    isNumberUsed[candidate] = false;
//                }
//            }
//        }
//    }
//    return false;
//}
//
//vector<int> Solution::constructDistancedSequence(int n) {
//    sequenceLength = 2 * n - 1;
//    finalSequence.resize(sequenceLength, 0);
//    isNumberUsed.resize(n + 1, false);
//    generateSequence(0, n);
//    return finalSequence;
//}