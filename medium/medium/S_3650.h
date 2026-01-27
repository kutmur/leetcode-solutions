#pragma once
#include <vector>
#include <queue>
#include <limits>
#include <utility>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the minimum cost to travel from node 0 to node n-1.
     * Forward edges (u->v) cost w.
     * Backward edges (v->u) cost 2*w.
     *
     * @param n Number of nodes (0 to n-1).
     * @param edges Vector of edges {u, v, w}.
     * @return Minimum cost or -1 if unreachable.
     */
    int minCost(int n, std::vector<std::vector<int>>& edges);

private:
    using ll = long long;
    const ll INF = 1e18; // Safe infinity for Dijkstra
};