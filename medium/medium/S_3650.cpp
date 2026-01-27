#include "S_3650.h"

int Solution::minCost(int n, std::vector<std::vector<int>>& edges) {
    // 1. Build Adjacency List
    // Stores pairs of {neighbor, weight}
    std::vector<std::vector<std::pair<int, ll>>> adj(n);

    for (const auto& e : edges) {
        int u = e[0];
        int v = e[1];
        ll w = e[2];

        // Forward edge cost: w
        adj[u].push_back({v, w});
        
        // Reverse edge cost: 2 * w
        // This simulates the "uphill" or "penalty" return mechanic
        adj[v].push_back({u, 2 * w});
    }

    // 2. Dijkstra's Algorithm
    // min_heap stores {current_cost, u_node}
    std::priority_queue<std::pair<ll, int>, 
                        std::vector<std::pair<ll, int>>, 
                        std::greater<std::pair<ll, int>>> pq;

    std::vector<ll> dist(n, INF);

    // Initialization
    dist[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        // Optimization: If current path is worse than already found, skip
        if (d > dist[u]) continue;

        // Explore neighbors
        for (const auto& [v, weight] : adj[u]) {
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    // 3. Result Processing
    if (dist[n - 1] == INF) {
        return -1;
    }

    return static_cast<int>(dist[n - 1]);
}