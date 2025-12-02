#include "S_2566.h"

int Solution::minMaxDifference(int num) {
    string max = to_string(num);
    string min = to_string(num);
    char temp = '0';        

    for(int i = 0; i < max.size(); i++) {
        if(max[i] != '9') {
            temp = max[i];
            break;
        }
    }

    for(int i = 0; i < max.size(); i++) {
        if(max[i] == temp)
            max[i] = '9';
    }

    for(int i = 0; i < min.size(); i++) {
        if(min[i] != '0') {
            temp = min[i];
            break;
        }
    }

    for(int i = 0; i < min.size(); i++) {
        if(min[i] == temp)
            min[i] = '0'; 
    }

    int int1 = stoi(max);
    int int2 = stoi(min);

    return int1 - int2;
}
