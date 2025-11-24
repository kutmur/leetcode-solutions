#pragma once
#include <algorithm> // For utility functions
#include <numeric>   // Useful context for GCD, though implemented manually below

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
     * Inserts a new node with value equal to GCD of current and next node
     * between every pair of adjacent nodes.
     */
    ListNode* insertGreatestCommonDivisors(ListNode* head);

private:
    /**
     * Helper function to calculate Greatest Common Divisor
     */
    int gcd(int a, int b);
};