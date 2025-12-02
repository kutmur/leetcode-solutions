#include "S_2418.h"
#include <unordered_map>
#include <algorithm>

vector<string> Solution::sortPeople(vector<string>& names, vector<int>& heights) {
    unordered_map<int, string> heightToName;
    for (int i = 0; i < names.size(); ++i) {
        heightToName[heights[i]] = names[i];
    }

    sort(heights.begin(), heights.end(), greater<int>());

    vector<string> result;
    for (int h : heights) {
        result.push_back(heightToName[h]);
    }

    return result;
}
