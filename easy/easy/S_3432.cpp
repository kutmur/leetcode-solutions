#include "S_3432.h"

using namespace std;

int Solution::countPartitions(vector<int>& nums) {
    int result = 0;
    int totalSum = 0;
    for(int i = 0; i < nums.size(); i++){
        totalSum += nums[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;

    // Iterate through partition points (leaving at least one element on the right)
    for(int i = 0; i < nums.size() - 1; i++){
        leftSum += nums[i];
        rightSum -= nums[i];

        if(abs(leftSum - rightSum) % 2 == 0){
            result++;
        }
    }
    return result;
}