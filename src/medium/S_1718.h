#ifndef S_1718_H
#define S_1718_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> finalSequence;
    vector<bool> isNumberUsed;
    int sequenceLength;

    bool generateSequence(int currentIndex, int maxNumber);

    vector<int> constructDistancedSequence(int n);
};

#endif // S_1718_H