#include "S_744.h"

using namespace std;

char Solution::nextGreatestLetter(vector<char>& letters, char target) {
    for(int i = 0; i < letters.size(); i++){
        if(letters[i] > target){
            return letters[i];
        }
    }
    return letters[0];
}