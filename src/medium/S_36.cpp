// S_36.cpp
#include "S_36.h"

bool isRowValid(std::vector<std::vector<char>>& board, int row, int col) {
    if (board[row][col] == '.') return true;
    int counter = 0;
    for (int c = 0; c < 9; c++)
        if (board[row][c] == board[row][col])
            counter++;
    return counter == 1;
}

bool isColValid(std::vector<std::vector<char>>& board, int row, int col) {
    if (board[row][col] == '.') return true;
    int counter = 0;
    for (int r = 0; r < 9; r++)
        if (board[r][col] == board[row][col])
            counter++;
    return counter == 1;
}

bool isBoxValid(std::vector<std::vector<char>>& board, int row, int col) {
    if (board[row][col] == '.') return true;
    int counter = 0;
    int boxRow = (row / 3) * 3;
    int boxCol = (col / 3) * 3;
    for (int r = boxRow; r < boxRow + 3; r++)
        for (int c = boxCol; c < boxCol + 3; c++)
            if (board[r][c] == board[row][col])
                counter++;
    return counter == 1;
}

bool Solution::isValidSudoku(std::vector<std::vector<char>>& board) {
    for (int row = 0; row < 9; row++)
        for (int col = 0; col < 9; col++)
            if (!isRowValid(board, row, col) ||
                !isColValid(board, row, col) ||
                !isBoxValid(board, row, col))
                return false;
    return true;
}
