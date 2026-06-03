#include "S_908.h"

using namespace std;

int Solution::smallestRangeI(vector<int>& nums, int k) {
    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        largest = max(largest, nums[i]);
        smallest = min(smallest, nums[i]);
    }

    int result = largest - smallest;

    if (result > 2 * k) {
        return result - (2 * k);
    } else {
        return 0;
    }
}