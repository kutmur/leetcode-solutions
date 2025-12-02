#include "S_86.h"

ListNode* Solution::partition(ListNode* head, int x) {
    if (!head || !head->next) {
        return head;
    }

    // First pass: find the original tail and the count of nodes.
    ListNode* tail = head;
    int count = 1;
    while (tail->next) {
        tail = tail->next;
        count++;
    }

    // Use a dummy head to simplify edge cases (like moving the original head).
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    ListNode* curr = head;

    // Second pass: iterate through the original nodes and move larger ones to the end.
    // We loop 'count' times to ensure we process each original node exactly once.
    for (int i = 0; i < count; ++i) {
        if (curr->val >= x) {
            // If the node to be moved is already the tail, we are done with moves.
            if (curr == tail) {
                break; 
            }
            // Detach curr from its current position.
            prev->next = curr->next;
            // Move curr to the end of the list.
            curr->next = nullptr;
            tail->next = curr;
            // Update the tail.
            tail = curr;
            // Advance curr to the next node to process. prev stays put.
            curr = prev->next;
        } else {
            // This node is in the correct partition, so we just move forward.
            prev = curr;
            curr = curr->next;
        }
    }
    return dummy.next;
}