#include "S_3043.h"

using namespace std;

int Solution::longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    int result = 0;
    unordered_map<string, int> map;
    
    for(int i = 0; i < arr1.size(); i++){
        string current = to_string(arr1[i]);
        string temp = "";
        
        for(int j = 0; j < current.size(); j++){
            temp.push_back(current[j]);
            map[temp]++;
        }
    }

    for(int i = 0; i < arr2.size(); i++){
        int till = 0;
        string current = to_string(arr2[i]);
        string temp = "";

        for(int j = 0; j < current.size(); j++){
            temp.push_back(current[j]);
            if(map[temp]) till++;
        }
        result = max(result, till);
    }

    return result;
}