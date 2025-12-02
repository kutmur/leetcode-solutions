#include "S_6.h"

string Solution::convert(string s, int numRows) {
    if(numRows == 1) return s;
    unordered_map<int, string> rows;
    int row = 0;
    bool down = true;

    for(int i = 0; i < s.size(); i++) {
        rows[row] += s[i];
        if(row == 0) down = true;
        if(row == numRows - 1) down = false;
        if(down) row++;
        else row--;
    }

    string result;
    for(int i = 0; i < numRows; i++)
        result += rows[i];
    return result;
}
