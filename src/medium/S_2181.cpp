#include "S_2181.h"

ListNode* Solution::mergeNodes(ListNode* head) {
    // Create a dummy node to act as the anchor for our new result list
    ListNode* dummy = new ListNode(0);
    ListNode* result = dummy;
    int sum = 0;

    // Skip the initial 0 node as per problem description guarantees
    head = head->next;

    while (head != nullptr) {
        if (head->val == 0) {
            // We reached the end of a segment
            if (sum > 0) {
                // Create a new node with the aggregated sum
                result->next = new ListNode(sum);
                result = result->next;
            }
            // Reset sum for the next segment
            sum = 0;
        } else {
            // Accumulate values inside the segment
            sum += head->val;
        }
        // Move to the next node in the original list
        head = head->next;
    }
    
    // Return the start of the new list (skipping our dummy anchor)
    return dummy->next;
}