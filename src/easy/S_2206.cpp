#include "S_2206.h"
#include <unordered_map>

bool Solution::divideArray(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    
    for (int num : nums) 
        freq[num]++;
    
    for (const auto& it : freq)
        if (it.second % 2 != 0) 
            return false;
    
    return true;
}
