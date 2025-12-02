#include "S_2843.h"
#include <string>

using namespace std;

int Solution::countSymmetricIntegers(int minValue, int maxValue) {
    int symmetricCount = 0;
    
    for (int currentNumber = minValue; currentNumber <= maxValue; ++currentNumber) {
        string numberStr = to_string(currentNumber);
        int digitCount = numberStr.size();
        
        // Skip odd-digit numbers
        if (digitCount % 2 != 0)
            continue;

        int halfLength = digitCount / 2;
        int leftSum = 0, rightSum = 0;

        for (int i = 0; i < halfLength; ++i)
            leftSum += numberStr[i] - '0';

        for (int i = halfLength; i < digitCount; ++i)
            rightSum += numberStr[i] - '0';

        if (leftSum == rightSum)
            ++symmetricCount;
    }

    return symmetricCount;
}
