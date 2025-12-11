#pragma once
#include <vector>

using namespace std;

class MyCircularQueue {
private:
    vector<int> data;    
    int front;           
    int rear;            
    int count;           
    int capacity;        
    
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k);
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value);
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue();
    
    /** Get the front item from the queue. */
    int Front();
    
    /** Get the last item from the queue. */
    int Rear();
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty();
    
    /** Checks whether the circular queue is full or not. */
    bool isFull();
};