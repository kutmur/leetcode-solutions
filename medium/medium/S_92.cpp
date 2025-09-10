#include "S_92.h"

/**
 * The core logic involves three main steps:
 * 1. Traverse the list to find the node just before the sublist to be reversed (`leftPrev`)
 *    and the first node of the sublist itself (`curr`).
 * 2. Reverse the sublist from `left` to `right`. This is a standard iterative reversal
 *    for a fixed number of nodes (`right - left + 1`).
 * 3. Reconnect the surrounding list parts with the newly reversed sublist.
 *    - `leftPrev`'s next pointer should point to the new head of the sublist.
 *    - The original head of the sublist (which is now the tail) should point to the
 *      node that was originally after the sublist.
 * A dummy node is used to simplify the edge case where `left = 1`.
 */
ListNode* Solution::reverseBetween(ListNode* head, int left, int right) {
    
    // Edge case: no reversal needed if the list is empty or the sublist has only one node.
    if (!head || left == right) {
        return head;
    }

    // A dummy node simplifies handling the case where the reversal starts at the head (left = 1).
    ListNode* dummy = new ListNode(0, head);

    // 1. Traverse to the node before the sublist starts.
    ListNode* leftPrev = dummy;
    ListNode* curr = head;
    for (int i = 0; i < left - 1; ++i) {
        leftPrev = curr;
        curr = curr->next;
    }

    // `leftPrev` is now at the node before the sublist.
    // `curr` is at the start of the sublist.

    // 2. Reverse the sublist.
    ListNode* subListHead = curr; // This will become the tail of the reversed sublist.
    ListNode* prev = nullptr;
    ListNode* next = nullptr;

    // The loop runs for the exact number of nodes in the sublist.
    for (int i = 0; i < right - left + 1; ++i) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // After the loop:
    // `prev` is the new head of the reversed sublist.
    // `subListHead` is the new tail of the reversed sublist.
    // `curr` is the first node after the sublist.

    // 3. Reconnect the pointers.
    leftPrev->next = prev;        // Connect the part before the sublist to the new head.
    subListHead->next = curr;     // Connect the new tail of the sublist to the part after.

    // The result is the node after the dummy node.
    // We don't delete the dummy node here as it's common practice in LeetCode-style
    // problems, but in a real application, this would cause a memory leak.
    return dummy->next;
}