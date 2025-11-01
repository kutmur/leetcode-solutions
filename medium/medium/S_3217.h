#ifndef S_3217_H
#define S_3217_H

#include <vector>
#include <unordered_map>

// Using directives to match the provided code's style
using namespace std;

/**
 * Definition for singly-linked list.
 */
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
     * @brief Filters a linked list by creating a new list without nodes
     * whose values are present in a given vector.
     *
     * @param nums A vector of integers whose values should be removed.
     * @param head The head of the original linked list.
     * @return ListNode* The head of the new, filtered linked list.
     */
    ListNode* modifiedList(vector<int>& nums, ListNode* head);
};

#endif // S_3217_H