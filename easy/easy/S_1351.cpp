#include "S_1351.h"

int Solution::countNegatives(std::vector<std::vector<int>>& grid) {
    int result = 0;
    // Iterate through each row of the grid
    for(int i = 0; i < grid.size(); i++){
        // Start from the last element of the current row
        int j = grid[i].size() - 1;
        
        // Move backwards while elements are negative
        // The rows are sorted in non-increasing order, so once we hit a 
        // non-negative number, we can stop checking this row.
        while(j >= 0 && grid[i][j] < 0){
            result++;
            j--;
        }
    }
    return result;
}