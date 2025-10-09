#include "S_148.h"

ListNode* Solution::sortList(ListNode* head) {
    // Base case: 0 or 1 element, the list is already sorted.
    if (!head || !head->next) {
        return head;
    }

    // Find the middle of the list using the slow/fast pointer approach.
    ListNode* slow = head;
    ListNode* fast = head->next; // Start fast ahead to handle even/odd lists correctly
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split the list into two halves.
    ListNode* mid = slow->next;
    slow->next = nullptr; // Terminate the first half.

    // Recursively sort both halves.
    ListNode* leftHalf = sortList(head);
    ListNode* rightHalf = sortList(mid);

    // Merge the sorted halves.
    return merge(leftHalf, rightHalf);
}

ListNode* Solution::merge(ListNode* l1, ListNode* l2) {
    // Use a dummy node to simplify list construction.
    ListNode dummy(0);
    ListNode* tail = &dummy;

    // Iterate while both lists have nodes.
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // Append the remaining nodes from either list.
    if (l1) {
        tail->next = l1;
    } else {
        tail->next = l2;
    }

    return dummy.next; // The merged list starts after the dummy node.
}