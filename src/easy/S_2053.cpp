#include "S_2053.h"
#include <unordered_map>

string Solution::kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> freq;
    for (const string& word : arr)
        freq[word]++;

    int count = 0;
    for (const string& word : arr) {
        if (freq[word] == 1) {
            count++;
            if (count == k)
                return word;
        }
    }
    return "";
}
