#ifndef S_728_H
#define S_728_H

#include <vector>

class Solution {
public:
    std::vector<int> selfDividingNumbers(int lowerBound, int upperBound);

private:
    bool isSelfDividing(int numberToCheck);
};

#endif // S_728_H
