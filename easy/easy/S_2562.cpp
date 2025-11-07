#include "Solution.h"

// Using namespace to match the provided code's style
// (which implicitly uses the std namespace)
using namespace std;

long long Solution::findTheArrayConcVal(vector<int>& nums) {
    long long result = 0;
    while(!nums.empty()){
        int front = 0;
        int back = 0;
        
        // Get and remove the front element
        if(!nums.empty()){
            front = nums.front();
            nums.erase(nums.begin() + 0);
        }
        
        // Get and remove the back element
        if(!nums.empty()){
            back = nums.back();
            nums.erase(nums.begin() + nums.size() - 1);
        }
        
        // Find the number of digits in 'back'
        int temp = back;
        int tens = 0;
        while(temp > 0){
            tens++;
            temp = temp / 10;
        }

        // Shift 'front' to the left by 'tens' digits
        front = front * pow(10,tens);
        
        // Add the concatenated value
        result += front + back;
    }

    return result;
}