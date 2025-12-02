#include "S_3066.h"

//{
//    priority_queue<long long, vector<long long>, greater<long long>> heap(nums.begin(), nums.end());
//    int operationCount = 0;
//
//    while (heap.size() > 1 && heap.top() < threshold) {
//        long long smallestValue = heap.top();
//        heap.pop();
//        long long secondSmallestValue = heap.top();
//        heap.pop();
//
//        long long combinedValue = min(smallestValue, secondSmallestValue) * 2 + max(smallestValue, secondSmallestValue);
//        heap.push(combinedValue);
//
//        operationCount++;
//    }
//
//    return operationCount;
//    }