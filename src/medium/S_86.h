#ifndef S_86_H
#define S_86_H

/**
 * Definition for singly-linked list.
 */
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
     * @brief Partitions a linked list around a value x.
     * 
     * All nodes with values less than x come before all nodes with values
     * greater than or equal to x. The original relative order of the nodes
     * in each of the two partitions is preserved.
     * 
     * @param head The head of the linked list.
     * @param x The partition value.
     * @return The head of the modified linked list.
     */
    ListNode* partition(ListNode* head, int x);
};

#endif // S_86_H