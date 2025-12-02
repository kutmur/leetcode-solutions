#include "S_463.h"

int Solution::islandPerimeter(vector<vector<int>>& grid) {
    int totalPerimeter = 0;
    int rowCount = grid.size();
    int colCount = grid[0].size();

    for(int row = 0; row < rowCount; row++) 
    {
        for(int col = 0; col < colCount; col++) 
        {
            if(grid[row][col] == 1) 
            {
                totalPerimeter += 4;
                if(row > 0 && grid[row - 1][col] == 1)
                    totalPerimeter -= 2;
                if(col > 0 && grid[row][col - 1] == 1)
                    totalPerimeter -= 2;
            }
        }
    }
    return totalPerimeter;
}
