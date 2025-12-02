#include "S_3285.h"

std::vector<int> Solution::stableMountains(std::vector<int>& height, int threshold) {
    std::vector<int> result;
    for (int i = 0; i < height.size(); ++i) {
        if (height[i] > threshold) {
            result.push_back(i + 1); // Using 1-based indexing
        }
    }
    return result;
}
