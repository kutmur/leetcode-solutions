#include "S_2144.h"

int Solution::minimumCost(vector<int>& cost) {
    int result = 0;
    int counter = 0;
    sort(cost.begin(), cost.end());

    for(int i = cost.size() - 1; i >= 0; i--){
        if(counter == 2){
            i--;
            counter = 0;
        }
        if(i >= 0){
            result += cost[i];
            counter++;
        }
    }

    return result;
}