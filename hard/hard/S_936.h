#pragma once
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<int> movesToStamp(std::string stamp, std::string target);

private:
    bool canReplace(const std::string& stamp, const std::string& target, int pos);
    int replace(const std::string& stamp, std::string& target, int pos);
};