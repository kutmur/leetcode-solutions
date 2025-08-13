#include "S_143.h"

void Solution::reorderList(ListNode* head) {
    if (!head || !head->next || !head->next->next) return;

    // 1) Find middle (slow ends at left tail)
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // 2) Split and reverse right half
    ListNode* right = slow->next;
    slow->next = nullptr;
    right = reverseList(right);

    // 3) Zip-merge left and right
    ListNode* left = head;
    while (right) {
        ListNode* left_next = left->next;
        ListNode* right_next = right->next;

        left->next = right;
        right->next = left_next;

        left = left_next ? left_next : right;
        right = right_next;
    }
}

ListNode* Solution::reverseList(ListNode* node) {
    ListNode* prev = nullptr;
    while (node) {
        ListNode* nxt = node->next;
        node->next = prev;
        prev = node;
        node = nxt;
    }
    return prev;
}
