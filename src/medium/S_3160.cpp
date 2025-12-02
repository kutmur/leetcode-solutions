#include "S_3160.h"

//{
//    unordered_map<int, int> balls;
//    unordered_map<int, int> colorFrequency;
//    int uniqueColors = 0;
//    vector<int> result;
//
//    for (const auto& query : queries)
//    {
//        int x = query[0], y = query[1];
//
//        if (balls.count(x))
//        {
//            int prevColor = balls[x];
//            colorFrequency[prevColor]--;
//            if (colorFrequency[prevColor] == 0)
//            {
//                uniqueColors--;
//            }
//        }
//
//        balls[x] = y;
//        if (colorFrequency[y] == 0)
//        {
//            uniqueColors++;
//        }
//        colorFrequency[y]++;
//
//        result.push_back(uniqueColors);
//    }
//    return result;
//    }