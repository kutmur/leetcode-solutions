#include "S_2300.h"
#include <algorithm>

std::vector<int> Solution::successfulPairs(std::vector<int>& spells, std::vector<int>& potions, long long success) {
    std::sort(potions.begin(), potions.end());
    std::vector<int> result;

    for (int i = 0; i < spells.size(); i++) {
        int l = 0, r = potions.size() - 1;
        int counter = 0;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long temp = 1LL * spells[i] * potions[mid];

            if (temp >= success) {
                counter = potions.size() - mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        result.push_back(counter);
    }

    return result;
}
