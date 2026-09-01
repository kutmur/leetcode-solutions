// S_973.cpp
#include "S_973.h"
#include <algorithm>

vector<vector<int>> Solution::kClosest(vector<vector<int>>& points, int k) {
    vector<pair<int, int>> p;

    for (int i = 0; i < points.size(); i++) {
        int dist = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
        p.push_back({dist, i});
    }
    
    sort(p.begin(), p.end());
    
    vector<vector<int>> result;
    for (int i = 0; i < k; i++) {
        result.push_back(points[p[i].second]);
    }
    
    return result;
}