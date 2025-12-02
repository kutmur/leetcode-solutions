#include "S_23.h"

ListNode* Solution::mergeKLists(std::vector<ListNode*>& lists) {
    // A min-heap to store the next available node from each list.
    // We use the custom CompareNodes struct to order the nodes by their value.
    std::priority_queue<ListNode*, std::vector<ListNode*>, CompareNodes> minHeap;

    // Initialize the heap with the head of each non-empty list.
    for (ListNode* listHead : lists) {
        if (listHead != nullptr) {
            minHeap.push(listHead);
        }
    }

    // A dummy head to simplify building the new merged list.
    ListNode* dummyHead = new ListNode(0);
    ListNode* tail = dummyHead;

    // Process nodes until the heap is empty.
    while (!minHeap.empty()) {
        // Get the node with the smallest value from the heap.
        ListNode* smallestNode = minHeap.top();
        minHeap.pop();

        // Append it to our result list.
        tail->next = smallestNode;
        tail = tail->next;

        // If the extracted node has a next element, add it to the heap.
        // This maintains the invariant that the heap holds the next candidate
        // from each list that still has elements.
        if (smallestNode->next != nullptr) {
            minHeap.push(smallestNode->next);
        }
    }

    // The merged list starts at the node after the dummy head.
    ListNode* resultHead = dummyHead->next;
    delete dummyHead; // Clean up the dummy node.
    return resultHead;
}