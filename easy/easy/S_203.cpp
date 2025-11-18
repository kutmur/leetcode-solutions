#include "S_203.h"
#include <cstddef> // For NULL

ListNode* Solution::removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr != NULL) {
        if (curr->val == val) {
            prev->next = curr->next;
        } 
        else {
            prev = curr;
        }
        curr = curr->next;
    }

    return dummy->next;
}