#ifndef S_2257_H
#define S_2257_H

#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @brief Counts the number of cells in a grid that are not guards, not walls, and not seen by any guard.
     * * @param m The number of rows in the grid.
     * @param n The number of columns in the grid.
     * @param guards A list of [row, col] positions for each guard.
     * @param walls A list of [row, col] positions for each wall.
     * @return The total count of unguarded empty cells.
     */
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls);
};

#endif // S_2257_H