/* S_3318.cpp */

#include "S_3318.h"
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility> // For pair
#include <cmath>   // For min

// The user's original code did not use std:: prefix,
// so we add 'using namespace std;' here to match it.
using namespace std;

vector<int> Solution::findXSum(vector<int>& nums, int k, int x) {
    int loop = nums.size() - k + 1;
    vector<int> result;

    for(int i = 0; i < loop; i++){
        unordered_map<int,int> freq;
        for(int j = 0; j < k; j++){
            freq[nums[i + j]]++;
        }

        vector<pair<int,int>> v;
        // Using C++17 structured binding as in the original code
        for(auto& [num, count] : freq){
            v.push_back({count, num});
        }

        // Using auto in lambda as in the original code
        sort(v.begin(), v.end(), [](auto& a, auto& b){
            if(a.first == b.first) return a.second > b.second;
            return a.first > b.first;
        });

        int sum = 0;
        for(int j = 0; j < min(x, (int)v.size()); j++){
            sum += v[j].first * v[j].second;
        }

        result.push_back(sum);
    }

    return result;
}