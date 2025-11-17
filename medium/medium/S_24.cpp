#include "S_24.h"

ListNode* Solution::swapPairs(ListNode* head) {
    ListNode* node = head;

    // We need at least two nodes to perform a swap.
    // The loop condition checks for the current node and the next node.
    while(node != nullptr && node->next != nullptr){
        
        // Standard swap algorithm for the values
        int temp = node->val;
        node->val = node->next->val;
        node->next->val = temp;
        
        // Move to the start of the next pair.
        // We skip two nodes at a time.
        node = node->next->next;
    }
    
    // The head pointer itself never changes,
    // only the values within the nodes.
    return head;
}