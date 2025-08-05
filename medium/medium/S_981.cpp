// S_981.cpp
#include "S_981.h"

TimeMap::TimeMap() {}

void TimeMap::set(string key, string value, int timestamp) {
    data[key].emplace_back(timestamp, value);
}

string TimeMap::get(string key, int timestamp) {
    if (data.find(key) == data.end())
        return "";

    const auto& v = data[key];
    int l = 0, r = v.size() - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (v[m].first <= timestamp) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return ans == -1 ? "" : v[ans].second;
}
