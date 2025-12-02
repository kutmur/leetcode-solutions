#include "S_118.h"

//std::vector<std::vector<int>> Solution::generate(int numRows) {
//    std::vector<std::vector<int>> res(numRows);
//    for (int i = 0; i < numRows; i++) {
//        res[i].resize(i + 1, 1);
//        for (int j = 1; j < i; j++)
//            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
//    }
//    return res;
//}