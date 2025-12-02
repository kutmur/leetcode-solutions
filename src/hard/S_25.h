#ifndef S_25_H
#define S_25_H

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
     * @brief Reverses a linked list in k-node groups.
     * 
     * If the number of nodes is not a multiple of k, then the left-out nodes at the end should remain as they are.
     * You may not alter the values in the list's nodes, only nodes themselves may be changed.
     * 
     * @param head The head of the linked list.
     * @param k The size of each group to be reversed.
     * @return The new head of the modified linked list.
     */
    ListNode* reverseKGroup(ListNode* head, int k);
};

#endif // S_25_H