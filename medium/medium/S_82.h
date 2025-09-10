#ifndef S_82_H
#define S_82_H

#include <unordered_map>

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
     * @brief Deletes all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
     * 
     * @param head The head of the sorted linked list.
     * @return ListNode* The head of the linked list after removing all nodes with duplicate values.
     */
    ListNode* deleteDuplicates(ListNode* head);
};

#endif // S_82_H