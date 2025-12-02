#ifndef S_52_H
#define S_52_H

class Solution {
public:
    int totalNQueens(int n);
private:
    void backtrack(int row, int n, unsigned long long columns, unsigned long long diag1, unsigned long long diag2);
};

#endif // S_52_H
