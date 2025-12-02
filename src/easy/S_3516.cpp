// S_3516.cpp
#include "S_3516.h"
#include <cstdlib>   // std::abs

int Solution::findClosest(int x, int y, int z) {
    int distanceToX = std::abs(z - x);
    int distanceToY = std::abs(z - y);

    if (distanceToX < distanceToY)
        return 1;
    if (distanceToY < distanceToX)
        return 2;
    return 0;
}
