#include "S_1207.h"

bool Solution::uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
        map[arr[i]]++;

    unordered_map<int, int> temp;
    for (auto& [key, value] : map) {
        temp[value]++;
        if (temp[value] > 1)
            return false;
    }
    return true;
}
