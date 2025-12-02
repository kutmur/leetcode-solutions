#include "S_61.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* head, int k) {
    
    // Base cases: empty list, single-node list, or no rotation needed.
    if (head == nullptr || head->next == nullptr || k == 0) {
        return head;
    }

    // 1. Find the length and the tail of the list.
    ListNode* tail = head;
    int size = 1;
    while (tail->next != nullptr) {
        size++;
        tail = tail->next;
    }

    // 2. Connect the tail to the head to form a circular list.
    tail->next = head;
    
    // 3. Calculate the effective number of rotations.
    k = k % size;

    // If k is a multiple of size, no rotation is needed.
    if (k == 0) {
        tail->next = nullptr; // Break the cycle and return the original head.
        return head;
    }
    
    // 4. Find the new tail. The new tail is at (size - k - 1) position from the head.
    int stepsToNewTail = size - k - 1;
    ListNode* newTail = head;
    for (int i = 0; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // 5. The new head is the node after the new tail.
    ListNode* newHead = newTail->next;

    // 6. Break the circle at the new tail.
    newTail->next = nullptr;

    // 7. Return the new head.
    return newHead;    
}