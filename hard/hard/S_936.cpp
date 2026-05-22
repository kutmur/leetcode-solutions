#include "S_936.h"

using namespace std;

bool Solution::canReplace(const string& stamp, const string& target, int pos) {
    bool progressMade = false;
    for (int i = 0; i < stamp.size(); i++) {
        if (target[pos + i] != '?') {
            if (target[pos + i] != stamp[i]) {
                return false; 
            }
            progressMade = true;
        }
    }
    return progressMade; 
}

int Solution::replace(const string& stamp, string& target, int pos) {
    int replacedCount = 0;
    for (int i = 0; i < stamp.size(); i++) {
        if (target[pos + i] != '?') {
            target[pos + i] = '?';
            replacedCount++;
        }
    }
    return replacedCount;
}

vector<int> Solution::movesToStamp(string stamp, string target) {
    int n = target.size();
    int m = stamp.size();
    int questionMarks = 0; 
    vector<int> result;
    vector<bool> visited(n, false);
    
    while (questionMarks < n) {
        bool replaced_in_this_turn = false;
        
        for (int i = 0; i <= n - m; i++) {
            if (!visited[i] && canReplace(stamp, target, i)) {
                questionMarks += replace(stamp, target, i);
                replaced_in_this_turn = true;
                visited[i] = true;
                result.push_back(i);
                
                if (questionMarks == n) break;
            }
        }
        
        if (!replaced_in_this_turn) {
            return {};
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}