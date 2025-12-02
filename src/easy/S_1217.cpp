#include "S_1217.h"
#include <algorithm> // for min

int Solution::minCostToMoveChips(vector<int>& position) {
    int even = 0, odd = 0;
    for (int p : position) {
        if (p % 2 == 0) {
            ++even;
        } else {
            ++odd;
        }
    }
    return min(even, odd);
}
