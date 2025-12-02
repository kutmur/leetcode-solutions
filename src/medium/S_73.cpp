// S_73.cpp
#include "S_73.h"

void Solution::setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    const int MARKER = 1e9 + 7;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                int up = i - 1, down = i + 1;
                int left = j - 1, right = j + 1;

                while(right < n){
                    if(matrix[i][right] != 0)
                        matrix[i][right] = MARKER;
                    right++;
                }
                while(left >= 0){
                    if(matrix[i][left] != 0)
                        matrix[i][left] = MARKER;
                    left--;
                }
                while(up >= 0){
                    if(matrix[up][j] != 0)
                        matrix[up][j] = MARKER;
                    up--;
                }
                while(down < m){
                    if(matrix[down][j] != 0)
                        matrix[down][j] = MARKER;
                    down++;
                }
            }
        }
    }

    for(int x = 0; x < m; x++){
        for(int y = 0; y < n; y++){
            if(matrix[x][y] == MARKER)
                matrix[x][y] = 0;
        }
    }
}
