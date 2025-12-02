#include "S_2462.h"

long long Solution::totalCost(std::vector<int>& costs, int k, int candidates) {
    long long result = 0;

    // Min-priority queues to store candidates from the left and right ends
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq2;

    int left = 0;
    int right = costs.size() - 1;

    // Initial population of the left priority queue
    for (int i = 0; i < candidates; ++i) {
        if (left <= right) {
            pq1.push(costs[left]);
            left++;
        }
    }

    // Initial population of the right priority queue
    for (int i = 0; i < candidates; ++i) {
        if (left <= right) {
            pq2.push(costs[right]);
            right--;
        }
    }

    // Hire k workers
    for (int i = 0; i < k; ++i) {
        // Get the minimum cost from each priority queue, use INT_MAX if empty
        int cost1 = pq1.empty() ? INT_MAX : pq1.top();
        int cost2 = pq2.empty() ? INT_MAX : pq2.top();

        // Choose the worker with the lower cost.
        // If costs are equal, the one from pq1 is chosen due to its smaller index.
        if (cost1 <= cost2) {
            result += cost1;
            pq1.pop();
            
            // If there are remaining workers, add the next one from the left
            if (left <= right) {
                pq1.push(costs[left]);
                left++;
            }
        } else {
            result += cost2;
            pq2.pop();

            // If there are remaining workers, add the next one from the right
            if (left <= right) {
                pq2.push(costs[right]);
                right--;
            }
        }
    }

    return result;
}