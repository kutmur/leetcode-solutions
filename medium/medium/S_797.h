#ifndef S_797_H
#define S_797_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph);
private:
    void dfs(vector<vector<int>>& graph, int node, vector<int>& path, vector<vector<int>>& result);
};

#endif // S_797_H
