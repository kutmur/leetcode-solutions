#include "S_678.h"

// Use the standard namespace to match the provided code's style
using namespace std;

/**
 * @brief Implementation of checkValidString.
 *
 * This function uses two stacks to track the indices of open parentheses
 * and asterisks. It greedily matches ')' with '(' first, then with '*',
 * and finally checks if remaining '(' can be matched by '*' that
 * appear after them.
 */
bool Solution::checkValidString(string s) {
    stack<int> left; // Stack to store indices of '('
    stack<int> star; // Stack to store indices of '*'

    // First pass: Process the string and balance ')'
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            left.push(i);
        } else if (s[i] == '*') {
            star.push(i);
        } else { // s[i] == ')'
            // Try to balance ')' with '(' first
            if (!left.empty()) {
                left.pop();
            }
            // Otherwise, try to balance with '*'
            else if (!star.empty()) {
                star.pop();
            }
            // If neither is available, it's an invalid string
            else {
                return false;
            }
        }
    }

    // Second pass: Check remaining '(' and '*'
    // All ')' are balanced. Now, check if remaining '('
    // can be balanced by remaining '*'.
    while (!left.empty() && !star.empty()) {
        // A '*' can only balance a '(' if it appears *after* it.
        // If left.top() > star.top(), the '(' is at a later index
        // than the '*', so this '*' cannot balance it.
        if (left.top() > star.top()) {
            return false; // Invalid: '*' comes before '('
        }
        // This '*' (at star.top()) can balance this '(' (at left.top())
        left.pop();
        star.pop();
    }

    // If the left stack is empty, all '(' were balanced.
    return left.empty();
}