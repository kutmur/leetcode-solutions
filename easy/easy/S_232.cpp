#include "S_232.h"

// Constructor
MyQueue::MyQueue() {
    // Stacks are initialized empty by default
}

// Helper: Moves elements from inputStack to outputStack if outputStack is empty.
void MyQueue::transferIfNeeded() {
    if (outputStack.empty()) {
        while (!inputStack.empty()) {
            outputStack.push(inputStack.top());
            inputStack.pop();
        }
    }
}

// Pushes element x to the back of the queue.
void MyQueue::push(int x) {
    inputStack.push(x);
}

// Removes the element from the front of the queue and returns it.
int MyQueue::pop() {
    transferIfNeeded();
    int front = outputStack.top();
    outputStack.pop();
    return front;
}

// Returns the element at the front of the queue.
int MyQueue::peek() {
    transferIfNeeded();
    return outputStack.top();
}

// Returns true if the queue is empty, false otherwise.
bool MyQueue::empty() {
    return inputStack.empty() && outputStack.empty();
}