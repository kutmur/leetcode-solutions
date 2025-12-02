#include "S_1290.h"

using namespace std;

int Solution::getDecimalValue(ListNode* head) {
    vector<int> temp = {};
    int result = 0;
    while(head != NULL){
        temp.push_back(head->val);
        head = head -> next; 
    }
    int n = temp.size();
    int two = 1;
    for(int i = n - 1; i >= 0; i--){
        result += temp[i] * two;
        two *= 2;
    }
    return result;
}