#include "S_2487.h"

using namespace std;

ListNode* Solution::removeNodes(ListNode* head) {
    vector<int> temp;
    ListNode* curr = head;

    // Convert Linked List to Vector for random access
    while(curr){
        temp.push_back(curr->val);
        curr = curr->next;
    }

    vector<int> good;
    int maxVal = -1;

    // Iterate backwards to find elements that are >= everything to their right
    for(int i = temp.size() - 1; i >= 0; i--){
        if(temp[i] >= maxVal){
            good.push_back(temp[i]);
            maxVal = temp[i];
        }
    }

    // Since we collected them backwards, reverse to restore original relative order
    reverse(good.begin(), good.end());

    // Reconstruct the Linked List
    ListNode* dummy = new ListNode(-1);
    ListNode* ptr = dummy;

    for(int x : good){
        ptr->next = new ListNode(x);
        ptr = ptr->next;
    }

    return dummy->next;
}