#pragma once

#include <stack>

/**
 * @brief LeetCode 232. Implement Queue using Stacks
 * * Implement a first in first out (FIFO) queue using only two stacks. 
 * The implemented queue supports all the functions of a normal queue 
 * (push, peek, pop, and empty).
 */
class MyQueue {
private:
    std::stack<int> inputStack;   // Standard LIFO behavior
    std::stack<int> outputStack;  // Reversed LIFO behavior (acts as FIFO)

    /**
     * @brief Helper function to move elements from input to output stack.
     * * This lazy-loads the output stack only when necessary, ensuring
     * elements are in the correct FIFO order.
     */
    void transferIfNeeded();

public:
    MyQueue();

    void push(int x);
    int pop();
    int peek();
    bool empty();
};