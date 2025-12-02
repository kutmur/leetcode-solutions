#include "S_2574.h"

vector<int> Solution::leftRightDifference(vector<int>& nums) {
    if (nums.size() == 1) {
        nums[0] = 0;
        return nums;
    }
    if (nums.size() == 2) {
        nums.push_back(nums[0]);
        nums.erase(nums.begin());
        return nums;
    }

    vector<int> leftSum = nums;
    vector<int> rightSum = nums;

    leftSum[0] = 0;
    rightSum[nums.size() - 1] = 0;

    // Compute leftSum
    int indexL = 1;
    while (indexL < nums.size()) {
        int temp1 = 0;
        for (int i = 0; i < indexL; i++) {
            temp1 += nums[i];
        }
        leftSum[indexL] = temp1;
        indexL++;
    }

    // Compute rightSum
    int indexR = nums.size() - 2;
    while (indexR >= 0) {
        int temp2 = 0;
        for (int j = nums.size() - 1; j > indexR; j--) {
            temp2 += nums[j];
        }
        rightSum[indexR] = temp2;
        indexR--;
    }

    // Final result
    for (int k = 0; k < nums.size(); k++) {
        nums[k] = abs(leftSum[k] - rightSum[k]);
    }

    return nums;
}
