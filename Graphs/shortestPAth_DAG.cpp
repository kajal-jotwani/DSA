/*
Shortest Path in a DAG:
In a Directed Acyclic Graph (DAG), shortest paths can be found by
topologically sorting the graph and then relaxing edges in that order.
Since all edges go forward in topological order, once a node is processed,
its shortest distance is finalized.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Topological DFS
    void topoDFS(int node,
                 vector<vector<pair<int,int>>> &adj,
                 vector<int> &visited,
                 stack<int> &st) {

        visited[node] = 1;

        for (auto &edge : adj[node]) {
            int v = edge.first;
            if (!visited[v]) {
                topoDFS(v, adj, visited, st);
            }
        }
        st.push(node);
    }

public:
    vector<int> shortestPath(int N, int M, vector<vector<int>> &edges) {

        // Adjacency list: u -> {v, weight}
        vector<vector<pair<int,int>>> adj(N);

        for (int i = 0; i < M; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v, wt});
        }

        // Step 1: Topological sort
        vector<int> visited(N, 0);
        stack<int> st;

        for (int i = 0; i < N; i++) {
            if (!visited[i]) {
                topoDFS(i, adj, visited, st);
            }
        }

        // Step 2: Distance initialization
        const int INF = 1e9;
        vector<int> dist(N, INF);
        dist[0] = 0;   // source node is 0

        // Step 3: Relax edges in topo order
        while (!st.empty()) {
            int node = st.top();
            st.pop();

            if (dist[node] != INF) {  // IMPORTANT CHECK
                for (auto &edge : adj[node]) {
                    int v = edge.first;
                    int wt = edge.second;

                    if (dist[node] + wt < dist[v]) {
                        dist[v] = dist[node] + wt;
                    }
                }
            }
        }

        // Step 4: Mark unreachable nodes
        for (int i = 0; i < N; i++) {
            if (dist[i] == INF)
                dist[i] = -1;
        }

        return dist;
    }
};

int main() {

    int N = 6, M = 7;

    vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 4, 1},
        {4, 5, 4},
        {4, 2, 2},
        {1, 2, 3},
        {2, 3, 6},
        {5, 3, 1}
    };

    Solution obj;
    vector<int> ans = obj.shortestPath(N, M, edges);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
