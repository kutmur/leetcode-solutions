#include "S_74.h"

bool Solution::searchMatrix(vector<vector<int>>& matrix, int target) {
    int ROWS = matrix.size();
    int COLS = matrix[0].size();

    int top = 0, bot = ROWS - 1;
    while (top <= bot) {
        int row = (top + bot) / 2;
        if (target > matrix[row][COLS - 1]) {
            top = row + 1;
        } else if (target < matrix[row][0]) {
            bot = row - 1;
        } else {
            break;
        }
    }

    if (!(top <= bot)) return false;

    int row = (top + bot) / 2;
    int l = 0, r = COLS - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (target > matrix[row][m]) {
            l = m + 1;
        } else if (target < matrix[row][m]) {
            r = m - 1;
        } else {
            return true;
        }
    }
    return false;
}
