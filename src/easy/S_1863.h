#ifndef S_1863_H
#define S_1863_H

#include <vector>

class Solution {
public:
    int subsetXORSum(std::vector<int>& nums);
private:
    int total = 0;
    void dfs(std::vector<int>& nums, int index, int currXOR);
};

#endif // S_1863_H
