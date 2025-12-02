// S_2140.cpp

#include "S_2140.h"
#include <algorithm>

long long Solution::dfs(int i, std::vector<std::vector<int>>& q, std::vector<long long>& memo) {
    if (i >= q.size())
        return 0;

    if (memo[i] != -1)
        return memo[i];

    // Solve the current question
    long long solve = q[i][0] + dfs(i + q[i][1] + 1, q, memo);

    // Skip the current question
    long long skip = dfs(i + 1, q, memo);

    // Memoize and return the maximum of solve and skip
    return memo[i] = std::max(solve, skip);
}

long long Solution::mostPoints(std::vector<std::vector<int>>& questions) {
    int n = questions.size();
    std::vector<long long> memo(n, -1);
    return dfs(0, questions, memo);
}
