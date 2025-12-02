#include "S_54.h"

vector<int> Solution::spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int m = matrix.size();
    int n = matrix[0].size();
    
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // move right
        for (int j = left; j <= right; ++j)
            result.push_back(matrix[top][j]);
        ++top;

        // move down
        for (int i = top; i <= bottom; ++i)
            result.push_back(matrix[i][right]);
        --right;

        // move left
        if (top <= bottom) {
            for (int j = right; j >= left; --j)
                result.push_back(matrix[bottom][j]);
            --bottom;
        }

        // move up
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                result.push_back(matrix[i][left]);
            ++left;
        }
    }

    return result;
}
