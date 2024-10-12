#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void DFS(int node, vector<int> adj[], vector<int> &ans, vector<bool> &visited ){
        visited[node] = 1;
        ans.push_back(node);

        for(int j = 0; j < adj[node].size(); j++){
            if(!visited[adj[node][j]]){
                DFS(adj[node][j], adj, ans, visited);
            }
        }
    }

    public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]){
        vector<bool> visited(V, false);
        vector<int> ans;

        DFS(0, adj, ans, visited);

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
    vector<int> adj[5];
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    Solution obj;
    vector <int> ans = obj.dfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}