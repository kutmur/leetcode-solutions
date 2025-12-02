#include "S_15.h"
#include <algorithm>
#include <unordered_map>

std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& inputArray) {
    std::sort(inputArray.begin(), inputArray.end());
    std::unordered_map<int, int> occurrenceMap;
    for (int val : inputArray)
        occurrenceMap[val]++;

    std::vector<std::vector<int>> tripletList;
    for (int outerIdx = 0; outerIdx < inputArray.size(); outerIdx++) {
        occurrenceMap[inputArray[outerIdx]]--;
        if (outerIdx > 0 && inputArray[outerIdx] == inputArray[outerIdx - 1]) continue;

        for (int innerIdx = outerIdx + 1; innerIdx < inputArray.size(); innerIdx++) {
            occurrenceMap[inputArray[innerIdx]]--;
            if (innerIdx > outerIdx + 1 && inputArray[innerIdx] == inputArray[innerIdx - 1]) continue;

            int requiredValue = -(inputArray[outerIdx] + inputArray[innerIdx]);
            if (occurrenceMap[requiredValue] > 0)
                tripletList.push_back({inputArray[outerIdx], inputArray[innerIdx], requiredValue});
        }
        for (int innerIdx = outerIdx + 1; innerIdx < inputArray.size(); innerIdx++)
            occurrenceMap[inputArray[innerIdx]]++;
    }
    return tripletList;
}
