#pragma once

// Definition for singly-linked list (as provided by LeetCode)
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
     * @brief Swaps the values of adjacent nodes in a linked list.
     * * Iterates through the list, and for each pair of nodes,
     * swaps their 'val' fields.
     * * @param head The head of the linked list.
     * @return The head of the modified linked list.
     */
    ListNode* swapPairs(ListNode* head);
};