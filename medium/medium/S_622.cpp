#include "S_622.h"

MyCircularQueue::MyCircularQueue(int k) {
    data.resize(k);
    capacity = k;
    front = 0;
    rear = -1;
    count = 0;
}

bool MyCircularQueue::enQueue(int value) {
    if (isFull()) {
        return false;
    }
    
    // Circularly increment rear index
    rear = (rear + 1) % capacity;
    data[rear] = value;
    count++;
    
    return true;
}

bool MyCircularQueue::deQueue() {
    if (isEmpty()) {
        return false;
    }
    
    // Circularly increment front index
    front = (front + 1) % capacity;
    count--;
    
    return true;
}

int MyCircularQueue::Front() {
    if (isEmpty()) {
        return -1;
    }
    return data[front];
}

int MyCircularQueue::Rear() {
    if (isEmpty()) {
        return -1;
    }
    return data[rear];
}

bool MyCircularQueue::isEmpty() {
    return count == 0;
}

bool MyCircularQueue::isFull() {
    return count == capacity;
}