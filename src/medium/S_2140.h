// S_2140.h

#ifndef S_2140_H
#define S_2140_H

#include <vector>

class Solution {
public:
    long long mostPoints(std::vector<std::vector<int>>& questions);

private:
    long long dfs(int i, std::vector<std::vector<int>>& q, std::vector<long long>& memo);
};

#endif // S_2140_H
