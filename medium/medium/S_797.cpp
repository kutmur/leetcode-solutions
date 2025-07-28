#include "S_797.h"

vector<vector<int>> Solution::allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> result;
    vector<int> path;
    dfs(graph, 0, path, result);
    return result;
}

void Solution::dfs(vector<vector<int>>& graph, int node, vector<int>& path, vector<vector<int>>& result) {
    path.push_back(node);

    if (node == graph.size() - 1)
        result.push_back(path);
    else
        for (int next : graph[node])
            dfs(graph, next, path, result);

    path.pop_back();
}
