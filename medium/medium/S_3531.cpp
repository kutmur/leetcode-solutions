#include "S_3531.h"

int Solution::countCoveredBuildings(int n, vector<vector<int>>& buildings) {
    // Maps to store the minimum and maximum X coordinates for each Y (row)
    unordered_map<int, int> minX_in_row;
    unordered_map<int, int> maxX_in_row;
    
    // Maps to store the minimum and maximum Y coordinates for each X (column)
    unordered_map<int, int> minY_in_col;
    unordered_map<int, int> maxY_in_col;

    // First Pass: Populate the boundary maps
    for(auto &b : buildings){
        int x = b[0];
        int y = b[1];

        // Update row bounds (fixed y, varying x)
        if(minX_in_row.find(y) == minX_in_row.end()) {
            minX_in_row[y] = x;
            maxX_in_row[y] = x;
        } else {
            minX_in_row[y] = min(minX_in_row[y], x);
            maxX_in_row[y] = max(maxX_in_row[y], x);
        }

        // Update column bounds (fixed x, varying y)
        if(minY_in_col.find(x) == minY_in_col.end()) {
            minY_in_col[x] = y;
            maxY_in_col[x] = y;
        } else {
            minY_in_col[x] = min(minY_in_col[x], y);
            maxY_in_col[x] = max(maxY_in_col[x], y);
        }
    }

    int result = 0;

    // Second Pass: Check if each building is strictly inside the bounds
    for(auto &b : buildings){
        int x = b[0];
        int y = b[1];

        // Covered by row means strictly between min X and max X for this row index (y)
        bool coveredByRow = x > minX_in_row[y] && x < maxX_in_row[y];
        
        // Covered by col means strictly between min Y and max Y for this column index (x)
        bool coveredByCol = y > minY_in_col[x] && y < maxY_in_col[x];

        if(coveredByRow && coveredByCol){
            result++;
        }
    }
    
    return result;
}