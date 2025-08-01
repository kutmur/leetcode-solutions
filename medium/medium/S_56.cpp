#include "S_56.h"
#include <algorithm>

using namespace std;

vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
    vector<vector<int>> result;
    sort(intervals.begin(), intervals.end());

    for(int i = 0; i < intervals.size(); i++){
        int first = intervals[i][0];
        int second = intervals[i][1];

        while(i + 1 < intervals.size() && second >= intervals[i + 1][0]){
            second = max(second, intervals[i + 1][1]);
            i++;
        }

        result.push_back({first, second});
    }

    return result;
}
