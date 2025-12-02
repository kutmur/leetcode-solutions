// S_1979.cpp
#include "S_1979.h"

int Solution::findGCD(vector<int>& nums) {
    int largest = nums[0];
    int smallest = nums[0];
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest)
            largest = nums[i];
        if (smallest > nums[i])
            smallest = nums[i];
    }

    while (smallest != 0) {
        int temp = smallest;
        smallest = largest % smallest;
        largest = temp;
    }

    return largest;
}
