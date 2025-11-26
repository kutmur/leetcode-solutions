#include "S_1669.h"

ListNode* Solution::mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* start1 = list1;
    // We don't strictly need end1 initialized here as it gets reset, but keeping user structure
    ListNode* end1 = list1; 
    ListNode* start2 = list2;
    ListNode* end2 = list2;

    int idx = 0;
    
    // Step 1: Find the node just before index 'a'
    while (idx < a - 1) {  
        start1 = start1->next;
        idx++;
    }

    // Step 2: Find the node just after index 'b'
    // We start from where we left off (start1 represents index a-1)
    end1 = start1;
    while (idx <= b) {
        end1 = end1->next;
        idx++;
    }

    // Step 3: Find the tail of list2
    while (end2->next != nullptr) {
        end2 = end2->next;
    }

    // Step 4: Rewire the connections
    start1->next = start2; // Connect (a-1) to head of list2
    end2->next = end1;     // Connect tail of list2 to (b+1)

    return list1;
}