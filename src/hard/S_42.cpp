#include "S_42.h"
#include <vector>
#include <algorithm>

int Solution::trap(std::vector<int>& height) {
    int lengthOfBars = height.size();
    if (lengthOfBars == 0) {
        return 0;
    }

    std::vector<int> maxToLeft(lengthOfBars);
    std::vector<int> maxToRight(lengthOfBars);

    maxToLeft[0] = height[0];
    for (int i = 1; i < lengthOfBars; i++) {
        maxToLeft[i] = std::max(maxToLeft[i - 1], height[i]);
    }

    maxToRight[lengthOfBars - 1] = height[lengthOfBars - 1];
    for (int i = lengthOfBars - 2; i >= 0; i--) {
        maxToRight[i] = std::max(maxToRight[i + 1], height[i]);
    }

    int totalTrappedWater = 0;
    for (int i = 0; i < lengthOfBars; i++) {
        totalTrappedWater += std::min(maxToLeft[i], maxToRight[i]) - height[i];
    }

    return totalTrappedWater;
}
