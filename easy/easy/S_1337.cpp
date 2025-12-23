#include "S_1337.h"

std::vector<int> Solution::kWeakestRows(std::vector<std::vector<int>>& mat, int k) {
    // Pair stores {soldierCount, rowIndex}
    std::vector<std::pair<int, int>> v;

    // 1. Calculate soldier count for each row
    for (int i = 0; i < mat.size(); i++) {
        int soldierCount = 0;

        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) {
                soldierCount++;
            }
        }

        v.push_back({soldierCount, i});
    }

    // 2. Sort based on strength. 
    // std::sort on pairs automatically compares the first element, 
    // then the second element if the first are equal.
    std::sort(v.begin(), v.end());

    // 3. Extract the top k indices
    std::vector<int> ans;
    ans.reserve(k); // Optimization: Reserve memory to prevent reallocations
    for (int i = 0; i < k; i++) {
        ans.push_back(v[i].second);
    }

    return ans;
}