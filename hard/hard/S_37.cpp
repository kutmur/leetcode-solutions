#include "S_37.h"

void Solution::solveSudoku(std::vector<std::vector<char>>& board) {
    solve(board);
}

bool Solution::solve(std::vector<std::vector<char>>& board) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            // Find an empty cell
            if (board[row][col] == '.') {
                // Try digits '1' through '9'
                for (char num = '1'; num <= '9'; num++) {
                    if (isValid(board, row, col, num)) {
                        // Tentatively place the number
                        board[row][col] = num;

                        // Recurse: if this path leads to a solution, return true
                        if (solve(board)) {
                            return true;
                        }

                        // Backtrack: reset the cell if the path failed
                        board[row][col] = '.';
                    }
                }
                // If no number 1-9 works for this empty cell, the current path is invalid
                return false;
            }
        }
    }
    // If no empty cells are left, the board is solved
    return true;
}

bool Solution::isValid(const std::vector<std::vector<char>>& board, int row, int col, char num) {
    // Check Row
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == num) {
            return false;
        }
    }

    // Check Column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == num) {
            return false;
        }
    }

    // Check 3x3 Sub-box
    int boxRowStart = (row / 3) * 3;
    int boxColStart = (col / 3) * 3;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[boxRowStart + i][boxColStart + j] == num) {
                return false;
            }
        }
    }

    return true;
}