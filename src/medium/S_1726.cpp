#include "S_1726.h"

// {
//     unordered_map<int, int> mp;
//     int ans = 0;
//
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int prod = nums[i] * nums[j];
//             ans += mp[prod] * 8;
//             mp[prod]++;
//         }
//     }
//     return ans;
//    }