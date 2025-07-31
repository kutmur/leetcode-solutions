// S_289.cpp

#include "S_289.h"

void Solution::gameOfLife(vector<vector<int>>& board) {
    int m = board.size();
    int n = board[0].size();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int counter = 0;
            if(j + 1 < n && board[i][j+1] && board[i][j+1] != 3) counter++;
            if(j > 0 && board[i][j-1] && board[i][j-1] != 3) counter++;
            if(i + 1 < m && board[i+1][j] && board[i+1][j] != 3) counter++;
            if(i + 1 < m && j + 1 < n && board[i+1][j+1] && board[i+1][j+1] != 3) counter++;
            if(i + 1 < m && j - 1 >= 0 && board[i+1][j-1] && board[i+1][j-1] != 3) counter++;
            if(i - 1 >= 0 && board[i-1][j] && board[i-1][j] != 3) counter++;
            if(i - 1 >= 0 && j + 1 < n && board[i-1][j+1] && board[i-1][j+1] != 3) counter++;
            if(i - 1 >= 0 && j - 1 >= 0 && board[i-1][j-1] && board[i-1][j-1] != 3) counter++;

            if(board[i][j]){
                if(counter < 2 || counter > 3)
                    board[i][j] = 2;
            } else {
                if(counter == 3)
                    board[i][j] = 3;
            }
        }
    }

    for(int x = 0; x < m; x++){
        for(int y = 0; y < n; y++){
            if(board[x][y] == 2) board[x][y] = 0;
            if(board[x][y] == 3) board[x][y] = 1;
        }
    }
}
