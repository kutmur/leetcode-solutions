#include "S_2657.h"

using namespace std;

vector<int> Solution::findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    vector<int> C;
    unordered_map<int, int> mapA;
    unordered_map<int, int> mapB;
    unordered_map<int, int> alreadycounted;
    int current = 0;
    
    for(int i = 0; i < A.size(); i++) {
        mapA[A[i]]++;
        mapB[B[i]]++;

        if(mapA[B[i]] && alreadycounted[B[i]] == 0) {
            current++;
            alreadycounted[B[i]]++;
        } 
            
        if(mapB[A[i]] && alreadycounted[A[i]] == 0) {
            current++;
            alreadycounted[A[i]]++;
        } 

        C.push_back(current);
    }
    
    return C;
}