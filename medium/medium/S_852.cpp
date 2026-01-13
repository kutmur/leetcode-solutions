#include "S_852.h"

int Solution::peakIndexInMountainArray(std::vector<int>& arr) {
    int l = 0;
    int r = arr.size() - 1;

    // We keep the loop running as long as l < r because 
    // we need to converge on a single index.
    while (l < r) {
        int mid = l + (r - l) / 2;

        // If the slope is positive (arr[mid] < arr[mid + 1]),
        // we are on the ascending side of the mountain.
        // The peak must be to the right, strictly after 'mid'.
        if (arr[mid] < arr[mid + 1]) {
            l = mid + 1;
        } 
        // If the slope is negative (or we are at the peak),
        // we are on the descending side or at the peak itself.
        // The peak is either at 'mid' or to the left.
        else {
            r = mid;
        }
    }

    // When l == r, we have found the peak index.
    return l;
}