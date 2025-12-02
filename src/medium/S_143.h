#ifndef S_143_H
#define S_143_H

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* n) : val(x), next(n) {}
};

class Solution {
public:
    void reorderList(ListNode* head);

private:
    ListNode* reverseList(ListNode* node);
};

#endif // S_143_H
