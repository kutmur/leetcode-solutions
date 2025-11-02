#include "S_2257.h"

int Solution::countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
    // 0 is empty 
    // 1 is guard
    // 2 is wall
    // -1 is guarded
    vector<vector<int>> cells(m, vector<int>(n, 0));
    
    // Mark guards
    for(int i = 0; i < guards.size(); i++){
        int temp1 = guards[i][0];
        int temp2 = guards[i][1];
        cells[temp1][temp2] = 1;
    }

    // Mark walls
    for(int i = 0; i < walls.size(); i++){
        int temp1 = walls[i][0];
        int temp2 = walls[i][1];
        cells[temp1][temp2] = 2;
    }

    // Iterate through the grid to find guards and simulate their vision
    for(int i = 0; i < cells.size(); i++){
        for(int j = 0; j < cells[i].size(); j++){
            
            // If we find a guard
            if(cells[i][j] == 1){
                
                //check left
                for(int k = j - 1; k >= 0; k--){
                    if(cells[i][k] == 2 || cells[i][k] == 1){ // Stop at wall or another guard
                        break;
                    }
                    cells[i][k] = -1; // Mark as guarded
                }

                //check right
                for(int k = j + 1; k < cells[i].size(); k++){
                    if(cells[i][k] == 2 || cells[i][k] == 1){
                        break;
                    }
                    cells[i][k] = -1;
                }

                //check up
                for(int k = i - 1; k >= 0; k--){
                    if(cells[k][j] == 2 || cells[k][j] == 1){
                        break;
                    }
                    cells[k][j] = -1;
                }   

                //check down
                for(int k = i + 1; k < cells.size(); k++){
                    if(cells[k][j] == 2 || cells[k][j] == 1){
                        break;
                    }
                    cells[k][j] = -1;
                }

            }
        }
    }

    // Count the remaining empty cells (value 0)
    int count = 0;
    for(int i = 0; i < cells.size(); i++){
        for(int j = 0; j < cells[i].size(); j++){
            if(cells[i][j] == 0){
                count++;
            }
        }
    }
    return count;
}