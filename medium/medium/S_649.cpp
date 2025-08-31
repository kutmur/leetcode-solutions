#include "S_649.h"

string Solution::predictPartyVictory(string senate) {
    queue<int> radiant_q;
    queue<int> dire_q;
    int size = senate.size();
    
    for(int i = 0; i < senate.size(); i++){
        if(senate[i] == 'R')
            radiant_q.push(i);
        else
            dire_q.push(i);                
    }
    
    while(!radiant_q.empty() && !dire_q.empty()){
        
        int r_index = radiant_q.front();
        radiant_q.pop();
        
        int d_index = dire_q.front();
        dire_q.pop();
        
        if(r_index < d_index){
            radiant_q.push(r_index + size); 
        } else {
            dire_q.push(d_index + size); 
        }
    }
    
    if(radiant_q.empty())
        return "Dire";
    else
        return "Radiant";
}