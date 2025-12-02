#ifndef S_138_H
#define S_138_H

#include <unordered_map>

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    /**
     * @brief Creates a deep copy of a linked list with a random pointer.
     * @param head The head of the list to be copied.
     * @return The head of the new, deep-copied list.
     */
    Node* copyRandomList(Node* head);
};

#endif // S_138_H