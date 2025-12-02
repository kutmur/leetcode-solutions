#ifndef S_2130_H
#define S_2130_H

#include <vector>
#include <algorithm>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    int pairSum(ListNode* head);
};

#endif // S_2130_H
