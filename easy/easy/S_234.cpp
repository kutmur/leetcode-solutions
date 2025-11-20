#include "S_234.h"

bool Solution::isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;

    // Step 1: Find the middle of the linked list using slow and fast pointers
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half of the list
    ListNode* prev = nullptr;
    ListNode* curr = slow;
    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // Step 3: Compare the first half and the reversed second half
    ListNode* first = head;
    ListNode* second = prev;
    while (second) {  
        if (first->val != second->val) return false;
        first = first->next;
        second = second->next;
    }

    return true;
}