#ifndef S_92_H
#define S_92_H

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
     * @brief Reverses a sublist of a linked list from position left to right.
     * 
     * @param head The head of the linked list.
     * @param left The starting position of the sublist to reverse (1-indexed).
     * @param right The ending position of the sublist to reverse (1-indexed).
     * @return ListNode* The head of the modified linked list.
     */
    ListNode* reverseBetween(ListNode* head, int left, int right);
};

#endif // S_92_H