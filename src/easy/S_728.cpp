#include "S_728.h"

std::vector<int> Solution::selfDividingNumbers(int lowerBound, int upperBound) {
    std::vector<int> selfDividingList;
    for (int currentNumber = lowerBound; currentNumber <= upperBound; ++currentNumber) {
        if (isSelfDividing(currentNumber))
            selfDividingList.push_back(currentNumber);
    }
    return selfDividingList;
}

bool Solution::isSelfDividing(int numberToCheck) {
    int originalNumber = numberToCheck;
    while (originalNumber > 0) {
        int currentDigit = originalNumber % 10;
        if (currentDigit == 0 || numberToCheck % currentDigit != 0)
            return false;
        originalNumber /= 10;
    }
    return true;
}
