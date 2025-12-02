#include "S_138.h"

Node* Solution::copyRandomList(Node* head) {
    // Map to store the mapping from an original node to its copy.
    std::unordered_map<Node*, Node*> oldToCopy;
    // Base case for null pointers, ensuring that if a next/random pointer is null,
    // its copy also points to null.
    oldToCopy[nullptr] = nullptr;

    Node* cur = head;
    while (cur != nullptr) {
        // Step 1: Ensure a copy of the current node exists and set its value.
        if (oldToCopy.find(cur) == oldToCopy.end()) {
            // Create a placeholder node. Its value will be correctly set below.
            // When this node is eventually visited as 'cur', its pointers will be set.
            oldToCopy[cur] = new Node(0);
        }
        oldToCopy[cur]->val = cur->val;

        // Step 2: Ensure a copy for the 'next' node exists and link it.
        if (oldToCopy.find(cur->next) == oldToCopy.end()) {
            oldToCopy[cur->next] = new Node(0);
        }
        oldToCopy[cur]->next = oldToCopy[cur->next];

        // Step 3: Ensure a copy for the 'random' node exists and link it.
        if (oldToCopy.find(cur->random) == oldToCopy.end()) {
            oldToCopy[cur->random] = new Node(0);
        }
        oldToCopy[cur]->random = oldToCopy[cur->random];

        // Move to the next node in the original list.
        cur = cur->next;
    }

    // The head of the new list is the copy corresponding to the original head.
    return oldToCopy[head];
}