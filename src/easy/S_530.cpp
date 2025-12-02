#include "S_530.h"

void Solution::populateValues(TreeNode* currentNode, std::vector<int>& valueList) {
    if (currentNode == nullptr) {
        return;
    }
    valueList.push_back(currentNode->val);
    populateValues(currentNode->left, valueList);
    populateValues(currentNode->right, valueList);
}

int Solution::getMinimumDifference(TreeNode* root) {
    std::vector<int> valueList;
    populateValues(root, valueList);
    
    if (valueList.size() < 2) {
        return 0;
    }
    
    int minimumDifference = INT_MAX;
    
    for (size_t i = 0; i < valueList.size(); ++i) {
        for (size_t j = i + 1; j < valueList.size(); ++j) {
            int currentDifference = std::abs(valueList[i] - valueList[j]);
            minimumDifference = std::min(minimumDifference, currentDifference);
        }
    }
    
    return minimumDifference;
}