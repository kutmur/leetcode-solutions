#ifndef S_407_H
#define S_407_H

#include <vector>
#include <queue>
#include <functional>
#include <algorithm> // For std::max

class Solution {
public:
    /**
     * @brief Calculates the volume of water that can be trapped in a 2D height map.
     * @param heightMap A 2D vector representing the height map of the terrain.
     * @return The total volume of trapped water.
     */
    int trapRainWater(std::vector<std::vector<int>>& heightMap);
};

#endif // S_407_H