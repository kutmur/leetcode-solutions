#include "S_25.h"
#include <cstddef> // For nullptr

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
    // 1. Check if there are at least k nodes left to reverse.
    ListNode* curr = head;
    int count = 0;
    while (curr != nullptr && count < k) {
        curr = curr->next;
        count++;
    }
    
    // 2. If a full group of k nodes exists, reverse it.
    if (count == k) {
        // `prev` will become the new head of this reversed group.
        ListNode* prev = nullptr;
        ListNode* next_node = nullptr;
        // Reset `curr` to the start of the group to begin reversal.
        curr = head;
        
        // Standard iterative reversal for k nodes.
        for (int i = 0; i < k; ++i) {
            next_node = curr->next; // Store the next node
            curr->next = prev;      // Reverse the current node's pointer
            prev = curr;            // Move prev one step forward
            curr = next_node;       // Move curr one step forward
        }
        
        // After reversal:
        // - `prev` is the new head of this group.
        // - `head` is the new tail of this group.
        // - `next_node` (or `curr`) is the head of the next segment.
        
        // 3. Recursively call the function on the rest of the list
        //    and link the tail of our current group (`head`) to the result.
        if (next_node != nullptr) {
            head->next = reverseKGroup(next_node, k);
        }
        
        // 4. Return the new head of this reversed group.
        return prev;
    }
    
    // 5. If there are fewer than k nodes left, return the head without modification.
    return head;
}