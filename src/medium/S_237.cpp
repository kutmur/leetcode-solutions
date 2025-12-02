#include "S_237.h"

// ReturnType Solution::functionName(...) { ... }
void Solution::deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}