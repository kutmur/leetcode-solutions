#include "S_1637.h"
#include <algorithm>

int Solution::maxWidthOfVerticalArea(std::vector<std::vector<int>>& points) {
    std::vector<int> xs;
    for (auto& p : points)
        xs.push_back(p[0]);

    std::sort(xs.begin(), xs.end());

    int maxGap = 0;
    for (int i = 1; i < xs.size(); ++i)
        maxGap = std::max(maxGap, xs[i] - xs[i - 1]);

    return maxGap;
}
