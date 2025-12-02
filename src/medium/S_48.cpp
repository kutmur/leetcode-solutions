#include "S_48.h"

void Solution::rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    for (int j = 0; j < n; j++) {
        matrix.push_back(vector<int>());
        for (int i = n - 1; i >= 0; i--) {
            matrix.back().push_back(matrix[i][j]);
        }
    }

    matrix.erase(matrix.begin(), matrix.begin() + n);
}
