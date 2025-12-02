#include "S_3217.h"

ListNode* Solution::modifiedList(vector<int>& nums, ListNode* head) {
    // Create a hash map (acting as a set) for O(1) average lookups
    // of the values to be deleted.
    unordered_map<int,int> freq; 
    for(int i = 0; i < nums.size(); i++){
        freq[nums[i]]++;
    }        

    // Use a dummy node to simplify building the new list.
    // 'current' will track the tail of the new list.
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    // Iterate through the original linked list.
    while(head != nullptr){
        // Check if the current node's value is in the 'freq' map.
        // If !freq[head->val] is true, the value is NOT in nums.
        if(!freq[head->val]){
            // Value is not in nums, so add it to the new list.
            current->next = new ListNode(head->val);
            current = current->next;
        }
        // else: The value is in nums, so we skip it (do not add it).

        // Move to the next node in the original list.
        head = head->next;
    }

    // The new list starts right after the dummy node.
    ListNode* newHead = dummy->next;
    
    // Clean up the temporary dummy node to prevent a memory leak.
    delete dummy;

    // Return the head of the newly constructed list.
    return newHead;
}