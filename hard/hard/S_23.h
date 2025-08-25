#ifndef S_23_H
#define S_23_H

#include <vector>
#include <queue>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    /**
     * @brief Merges k sorted linked lists into one sorted linked list.
     * @param lists A vector of pointers to the heads of the sorted lists.
     * @return A pointer to the head of the merged sorted list.
     */
    ListNode* mergeKLists(std::vector<ListNode*>& lists);

private:
    // Custom comparator for the min-heap to order nodes by their value.
    struct CompareNodes {
        bool operator()(const ListNode* a, const ListNode* b) {
            // For a min-heap, we want the "smaller" element to have higher priority.
            // The priority_queue in C++ is a max-heap by default, so we use `>`
            // to reverse the order and simulate a min-heap.
            return a->val > b->val;
        }
    };
};

#endif // S_23_H