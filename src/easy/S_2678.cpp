#include "S_2678.h"

int Solution::countSeniors(std::vector<std::string>& details) {
    int counter = 0;
    for(int i = 0; i < details.size(); i++)
    {
        if(details[i][11] >= '6') 
        {
            if(details[i][11] == '6' && details[i][12] == '0')
                continue; 

            if(details[i][12] >= '0') 
                counter++;
        }
    }
    return counter;
}
