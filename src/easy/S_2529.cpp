#include "S_2529.h"
#include <algorithm> // for max

int Solution::maximumCount(vector<int>& nums) {
    int counter1 = 0; // positive count
    int counter2 = 0; // negative count
    
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            counter1++;
        } else if (nums[i] < 0) {
            counter2++;
        }
    }
    
    return max(counter1, counter2);
}
