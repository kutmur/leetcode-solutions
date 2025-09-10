#include "S_82.h"

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if (!head) {
        return nullptr;
    }

    // Use a hash map to count the frequency of each value.
    std::unordered_map<int, int> freq;
    ListNode* travers = head;
    while (travers != nullptr) {
        freq[travers->val]++;
        travers = travers->next;
    }

    // Create a dummy head for the result list to simplify edge cases.
    ListNode* dummy = new ListNode(0);
    ListNode* resultHead = dummy; // Keep a pointer to the start of the dummy list.

    // Traverse the original list again to build the new list.
    ListNode* current = head;
    while (current != nullptr) {
        // If the frequency of the current node's value is 1, it's unique.
        if (freq[current->val] == 1) {
            // Append it to the result list.
            dummy->next = current;
            dummy = dummy->next;
        }
        current = current->next;
    }

    // Terminate the new list. This is crucial if the last element(s) of the original list were duplicates.
    dummy->next = nullptr;

    // The result list starts after the dummy node.
    ListNode* newHead = resultHead->next;
    delete resultHead; // Clean up the allocated dummy node.
    return newHead;
}