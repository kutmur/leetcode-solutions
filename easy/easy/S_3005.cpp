#include "S_3005.h"

using namespace std;

int Solution::maxFrequencyElements(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> freq = {};

    int counter = 1;
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] == nums[i + 1]){
            counter++;
        }
        else{
            freq.push_back(counter);
            counter = 1;
        }
    }
    freq.push_back(counter);
    
    sort(freq.begin(), freq.end(), greater<int>());

    if(freq[0] == 1){
        return nums.size();
    }
    else{
        int result = freq[0];
        for(int i = 0; i < freq.size() - 1; i++){
            if(freq[i] == freq[i + 1]){
                result += freq[i + 1];
            }
            else{
                break;
            }
        }
        return result;
    }
}