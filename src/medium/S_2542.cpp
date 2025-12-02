#include "S_2542.h"

long long Solution::maxScore(std::vector<int>& nums1, std::vector<int>& nums2, int k) {
    int n = nums1.size();
    std::vector<std::pair<int, int>> pairs(n);
    for (int i = 0; i < n; ++i) {
        pairs[i] = {nums2[i], nums1[i]};
    }

    // Sort pairs in descending order based on nums2 values
    std::sort(pairs.rbegin(), pairs.rend());

    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    long long currentSum = 0;
    long long maxScore = 0;

    for (int i = 0; i < n; ++i) {
        minHeap.push(pairs[i].second);
        currentSum += pairs[i].second;

        if (minHeap.size() > k) {
            currentSum -= minHeap.top();
            minHeap.pop();
        }

        if (minHeap.size() == k) {
            maxScore = std::max(maxScore, currentSum * pairs[i].first);
        }
    }

    return maxScore;
}