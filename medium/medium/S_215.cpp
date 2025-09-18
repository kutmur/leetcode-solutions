#include "S_215.h"

int Solution::findKthLargest(std::vector<int>& nums, int k) {
    // A min-heap to store the k largest elements.
    // The top of the min-heap is the smallest of the k largest elements,
    // which is the k-th largest element overall.
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int num : nums) {
        if (minHeap.size() < k) {
            // If the heap is not full, just add the element.
            minHeap.push(num);
        } else if (num > minHeap.top()) {
            // If the current number is larger than the smallest element in the heap
            // (the k-th largest so far), replace it.
            minHeap.pop();
            minHeap.push(num);
        }
    }

    // The top of the heap is the k-th largest element.
    return minHeap.top();
}