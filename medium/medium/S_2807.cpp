#include "S_2807.h"

ListNode* Solution::insertGreatestCommonDivisors(ListNode* head) {
    ListNode* node = head;
    
    // Iterate as long as there is a current node and a next node to form a pair
    while(node != nullptr && node->next != nullptr){
        int a = node->val;
        int b = node->next->val;
        
        // Create the new node with the GCD value
        ListNode* temp = new ListNode(gcd(a, b));
        
        // Insert the new node between node and node->next
        temp->next = node->next;
        node->next = temp;
        
        // Advance the pointer to the node after the newly inserted one
        node = temp->next;
    }
    return head;
}

int Solution::gcd(int a, int b) {
    // Euclidean algorithm implementation
    return b ? gcd(b, a % b) : a;
}