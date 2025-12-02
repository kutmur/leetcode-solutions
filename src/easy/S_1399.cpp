#include "S_1399.h"

int Solution::countLargestGroup(int upperLimit) {
    unordered_map<int, int> digitSumFrequencyMap;
    int largestGroupSize = 0;

    for (int currentNumber = 1; currentNumber <= upperLimit; currentNumber++) {
        int digitSumValue = calculateDigitSum(currentNumber);
        digitSumFrequencyMap[digitSumValue]++;
        largestGroupSize = max(largestGroupSize, digitSumFrequencyMap[digitSumValue]);
    }

    int largestGroupCount = 0;
    for (const auto& entry : digitSumFrequencyMap)
        if (entry.second == largestGroupSize)
            largestGroupCount++;

    return largestGroupCount;
}

int Solution::calculateDigitSum(int number) {
    int totalDigitSum = 0;
    while (number > 0) {
        totalDigitSum += number % 10;
        number /= 10;
    }
    return totalDigitSum;
}
