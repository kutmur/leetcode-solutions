#include "S_1578.h"
#include <algorithm>
using namespace std;

int Solution::minCost(string colors, vector<int>& neededTime) {
    int total = 0;
    for (int i = 1; i < colors.size(); ++i) {
        if (colors[i] == colors[i - 1]) {
            total += min(neededTime[i], neededTime[i - 1]);
            neededTime[i] = max(neededTime[i], neededTime[i - 1]);
        }
    }
    return total;
}
