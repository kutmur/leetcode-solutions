#ifndef S_1399_H
#define S_1399_H

#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countLargestGroup(int upperLimit);

private:
    int calculateDigitSum(int number);
};

#endif // S_1399_H
