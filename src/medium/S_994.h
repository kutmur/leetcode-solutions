#ifndef S_994_H
#define S_994_H

#include <vector>
#include <queue>

class Solution {
public:
    /**
     * @brief Calculates the minimum time required to rot all oranges.
     * @param grid A 2D vector representing the grid of oranges.
     * 0: empty cell
     * 1: fresh orange
     * 2: rotten orange
     * @return The minimum number of minutes, or -1 if some oranges are unreachable.
     */
    int orangesRotting(std::vector<std::vector<int>>& grid);
};

#endif // S_994_H