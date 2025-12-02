#ifndef S_148_H
#define S_148_H

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
     * @brief Sorts a linked list in ascending order using the merge sort algorithm.
     * @param head A pointer to the head of the linked list.
     * @return A pointer to the head of the sorted linked list.
     */
    ListNode* sortList(ListNode* head);

private:
    /**
     * @brief Merges two sorted linked lists into a single sorted linked list.
     * @param l1 A pointer to the head of the first sorted list.
     * @param l2 A pointer to the head of the second sorted list.
     * @return A pointer to the head of the merged sorted list.
     */
    ListNode* merge(ListNode* l1, ListNode* l2);
};

#endif // S_148_H