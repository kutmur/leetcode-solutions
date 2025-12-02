#include "S_575.h"
#include <unordered_map>

int Solution::distributeCandies(std::vector<int>& candyType) {
    int eat = candyType.size() / 2;
    std::unordered_map<int, int> map;
    for (int num : candyType)
        map[num];
    return std::min(eat, static_cast<int>(map.size()));
}
