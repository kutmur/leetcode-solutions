#include "S_2373.h"
#include <algorithm>
#include <climits>

vector<vector<int>> Solution::largestLocal(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2));

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            int maxVal = INT_MIN;
            for (int dx = 0; dx < 3; dx++) {
                for (int dy = 0; dy < 3; dy++) {
                    maxVal = max(maxVal, grid[i + dx][j + dy]);
                }
            }
            maxLocal[i][j] = maxVal;
        }
    }
    return maxLocal;
}
