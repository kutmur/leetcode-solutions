#include "S_2352.h"

int Solution::equalPairs(std::vector<std::vector<int>>& grid) {
    std::unordered_map<std::string, int> map;
    int n = grid.size();

    for (int i = 0; i < n; i++) {
        std::string row = "";
        for (int j = 0; j < n; j++) {
            row += std::to_string(grid[i][j]) + ",";
        }
        map[row]++;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        std::string col = "";
        for (int j = 0; j < n; j++) {
            col += std::to_string(grid[j][i]) + ",";
        }
        if (map.find(col) != map.end())
            count += map[col];
    }

    return count;
}
