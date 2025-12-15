#pragma once
#include <vector>

class Solution {
public:
    /**
     * Solves the Sudoku puzzle by modifying the board in-place.
     * @param board The 9x9 Sudoku board where empty cells are denoted by '.'
     */
    void solveSudoku(std::vector<std::vector<char>>& board);

private:
    /**
     * Recursive backtracking helper to fill the board.
     */
    bool solve(std::vector<std::vector<char>>& board);

    /**
     * Validates if placing a character 'num' at board[row][col] is legal
     * according to Sudoku rules (Row, Column, and 3x3 Sub-box).
     */
    bool isValid(const std::vector<std::vector<char>>& board, int row, int col, char num);
};