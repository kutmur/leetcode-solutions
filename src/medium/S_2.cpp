#include "S_2.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1;
        int carry = 0;
        ListNode* prev = nullptr;

        while (l1 || l2) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;

            if (l1) {
                l1->val = sum % 10;
                prev = l1;
                l1 = l1->next;
            } else {
                prev->next = new ListNode(sum % 10);
                prev = prev->next;
            }

            if (l2) l2 = l2->next;
        }

        if (carry)
            prev->next = new ListNode(carry);

        return head;
    }
};
