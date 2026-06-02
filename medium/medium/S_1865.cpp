#include "S_1865.h"

FindSumPairs::FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
    this->nums1 = nums1;
    this->nums2 = nums2;
    
    // Map the frequencies of the second array for O(1) lookups later
    for(int num : nums2){
        freq[num]++;
    }
}

void FindSumPairs::add(int index, int val) {
    // Remove the old value's contribution from our frequency map
    freq[nums2[index]]--;
    
    // Update the actual array
    nums2[index] += val; 
    
    // Add the new value's contribution to our frequency map
    freq[nums2[index]]++; 
}

int FindSumPairs::count(int tot) {
    int result = 0;
    
    // Iterate through the first array and find complements in the frequency map
    for(int i = 0; i < nums1.size(); i++){
        int target = tot - nums1[i]; 
        if(freq.count(target)){
            result += freq[target];
        }
    }
    return result;
}