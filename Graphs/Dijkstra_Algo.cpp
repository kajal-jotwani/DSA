/*
Dijkstra’s Algorithm:
Finds the shortest path from a source vertex to all other vertices
in a graph with non-negative edge weights.
It uses a greedy approach and a min-priority queue (or set)
to always expand the node with the minimum current distance.
Does NOT work with negative edge weights.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {

        // Min-heap: {distance, node}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        vector<int> dist(V, 1e9);
        dist[S] = 0;
        pq.push({0, S});

        while (!pq.empty()) {
            int currDist = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Ignore stale entries
            if (currDist > dist[node]) continue;

            for (auto &it : adj[node]) {
                int adjNode = it[0];
                int edgeWt = it[1];

                if (currDist + edgeWt < dist[adjNode]) {
                    dist[adjNode] = currDist + edgeWt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

int main() {

    int V = 3, S = 2;
    vector<vector<int>> adj[V];

    // edges: u -> {v, weight}
    adj[0].push_back({1, 1});
    adj[0].push_back({2, 6});
    adj[1].push_back({2, 3});
    adj[1].push_back({0, 1});
    adj[2].push_back({1, 3});
    adj[2].push_back({0, 6});

    Solution obj;
    vector<int> res = obj.dijkstra(V, adj, S);

    for (int i = 0; i < V; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
