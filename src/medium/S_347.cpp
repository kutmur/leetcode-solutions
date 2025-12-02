#include "S_347.h"

vector<int> Solution::topKFrequent(vector<int>& inputArray, int howMany) {
    unordered_map<int, int> frequencyMap;
    vector<vector<int>> frequencyBuckets(inputArray.size() + 1);

    for (int element : inputArray)
        frequencyMap[element] = 1 + frequencyMap[element];

    for (const auto& pair : frequencyMap)
        frequencyBuckets[pair.second].push_back(pair.first);

    vector<int> answerList;

    for (int freqIndex = frequencyBuckets.size() - 1; freqIndex > 0; --freqIndex) {
        for (int value : frequencyBuckets[freqIndex]) {
            answerList.push_back(value);
            if (answerList.size() == howMany)
                return answerList;
        }
    }
    return answerList;
}
