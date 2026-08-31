// S_2058.cpp
#include "S_2058.h"
#include <climits>
#include <algorithm>

using namespace std;

vector<int> Solution::nodesBetweenCriticalPoints(ListNode* head) {
    if (!head || !head->next || !head->next->next) {
        return {-1, -1};
    }

    vector<int> criticalPoints;
    ListNode* prev = head;
    ListNode* curr = head->next;
    ListNode* nextNode = curr->next;
    int currentIndex = 1;

    while (nextNode != nullptr) {
        bool isLocalMin = (curr->val < prev->val) && (curr->val < nextNode->val);
        bool isLocalMax = (curr->val > prev->val) && (curr->val > nextNode->val);

        if (isLocalMin || isLocalMax) {
            criticalPoints.push_back(currentIndex);
        }

        prev = curr;
        curr = nextNode;
        nextNode = nextNode->next;
        currentIndex++;
    }

    if (criticalPoints.size() < 2) {
        return {-1, -1};
    }

    int minDistance = INT_MAX;
    for (size_t i = 1; i < criticalPoints.size(); i++) {
        minDistance = min(minDistance, criticalPoints[i] - criticalPoints[i - 1]);
    }

    int maxDistance = criticalPoints.back() - criticalPoints.front();

    return {minDistance, maxDistance};
}