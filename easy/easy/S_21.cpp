#include "S_21.h"
#include <vector>
#include <algorithm>

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* temp = list1;
        while (temp->next)
            temp = temp->next;
        temp->next = list2;

        std::vector<int> vals;
        temp = list1;
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        std::sort(vals.begin(), vals.end());

        temp = list1;
        int i = 0;
        while (temp) {
            temp->val = vals[i++];
            temp = temp->next;
        }

        return list1;
    }
};
