#include "S_846.h"
#include <map>

bool Solution::isNStraightHand(std::vector<int>& hand, int groupSize) {
    int n = (int)hand.size();
    if (n % groupSize != 0) return false;
    if (groupSize == 1) return true;

    std::map<int, int> cnt;
    for (int x : hand) cnt[x]++;

    while (!cnt.empty()) {
        int start = cnt.begin()->first;   // smallest available value
        int need  = cnt.begin()->second;  // how many runs must include start

        for (int v = start; v < start + groupSize; ++v) {
            auto it = cnt.find(v);
            if (it == cnt.end() || it->second < need) return false;

            it->second -= need;
            if (it->second == 0) cnt.erase(it);
        }
    }
    return true;
}
