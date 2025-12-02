#include "S_1331.h"
#include <algorithm>

vector<int> Solution::arrayRankTransform(vector<int>& arr) {
    int n = arr.size();
    if (n == 0)
        return {};

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; ++i)
        vp.emplace_back(arr[i], i);

    sort(vp.begin(), vp.end());

    vector<int> res(n);
    int rk = 1;
    res[vp[0].second] = rk;

    for (int i = 1; i < n; ++i) {
        if (vp[i].first != vp[i - 1].first)
            ++rk;
        res[vp[i].second] = rk;
    }

    return res;
}
