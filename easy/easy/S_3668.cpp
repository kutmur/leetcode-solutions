#include "S_3668.h"

using namespace std;

vector<int> Solution::recoverOrder(vector<int>& order, vector<int>& friends) {
    unordered_map<int, int> freq;
    vector<int> result = {};

    for(int i = 0; i < friends.size(); i++){
        freq[friends[i]]++;
    }

    for(int i = 0; i < order.size(); i++){
        if(freq[order[i]] != 0){
            result.push_back(order[i]);
        }
    }
    return result;
}