#include "S_2130.h"

int Solution::pairSum(ListNode* head) {
    std::vector<int> vals;
    while (head) {
        vals.push_back(head->val);
        head = head->next;
    }

    int maxSum = 0;
    int n = vals.size();
    for (int i = 0; i < n / 2; ++i)
        maxSum = std::max(maxSum, vals[i] + vals[n - 1 - i]);

    return maxSum;
}
