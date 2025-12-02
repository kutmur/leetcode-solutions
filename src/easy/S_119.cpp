#include "S_119.h"

vector<int> Solution::getRow(int rowIndex) {
    vector<int> row = {1};
    long val = 1;
    for (int i = 1; i <= rowIndex; i++) {
        val = val * (rowIndex - i + 1) / i;
        row.push_back(val);
    }
    return row;
}
