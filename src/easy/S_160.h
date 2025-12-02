#pragma once
#include <iostream> // For NULL/nullptr

// Definition for singly-linked list (Standard LeetCode struct)
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
};