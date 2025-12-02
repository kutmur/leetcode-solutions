#include "S_717.h"

bool Solution::isOneBitCharacter(vector<int>& bits) {
    int i = 0; 
    // Iterate through the array, stopping before the last element
    while(i < bits.size() - 1){
        // If we encounter a 1, it must be a 2-bit character (10 or 11)
        // so we skip the next bit as well.
        if(bits[i] == 1){
            i = i + 2;
        }
        // If we encounter a 0, it is a 1-bit character, move 1 step.
        else{
            i = i + 1;
        }
    }
    
    // If i equals the size of the vector, it means the last character 
    // was consumed as the tail of a 2-bit character.
    // If i stops exactly at the last index (size - 1), the last character 
    // is a standalone 1-bit character.
    if(i == bits.size()){
        return false;
    }
    else{
        return true;
    }
}