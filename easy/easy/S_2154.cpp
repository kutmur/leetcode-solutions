#include "S_2154.h"

int Solution::findFinalValue(std::vector<int>& nums, int original) {
    int i = 0; 
    while(i < nums.size()){
        if(nums[i] == original){
            original *= 2;
            // Reset index to search for the new value from the beginning
            // because the new value might be located before the current index
            i = 0;
        }
        else{
            i++;
        }
    }
    return original;
}