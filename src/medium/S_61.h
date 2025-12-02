#ifndef S_61_H
#define S_61_H

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    /**
     * @brief Rotates a linked list to the right by k places.
     * 
     * @param head The head of the linked list.
     * @param k The number of places to rotate.
     * @return ListNode* The head of the new rotated linked list.
     */
    ListNode* rotateRight(ListNode* head, int k);
};

#endif // S_61_H