#include "S_566.h"

vector<vector<int>> Solution::matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int r1 = mat.size();
    int c1 = mat[0].size();
    if (r1 * c1 != r * c)
        return mat;

    vector<vector<int>> result(r, vector<int>(c));
    for (int i = 0; i < r1 * c1; ++i)
        result[i / c][i % c] = mat[i / c1][i % c1];

    return result;
}
