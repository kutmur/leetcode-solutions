#include "S_1828.h"

vector<int> Solution::countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    vector<int> answer;
    for (const auto& query : queries) {
        int count = 0;
        int x = query[0], y = query[1], r = query[2];
        int r_squared = r * r;
        for (const auto& point : points) {
            int dx = point[0] - x;
            int dy = point[1] - y;
            if (dx * dx + dy * dy <= r_squared)
                count++;
        }
        answer.push_back(count);
    }
    return answer;
}
