#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    // function to return Breadth First Traversal
    vector<int> BFSgraph(int V, vector<int> adj[]){
        queue<int> q;
        vector<bool> visited(V, 0);
        // push the initial node
        q.push(0);
        visited[0] = 1;
        vector<int> ans;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(int j = 0; j < adj[node].size(); j++){
                if(!visited[adj[node][j]]){
                    visited[adj[node][j]] = 1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
    }
};

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector<int> &ans){
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main(){
    vector<int> adj[6];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    solution obj;
    vector<int> result = obj.BFSgraph(5, adj);
    printAns(result);

    return 0;
}