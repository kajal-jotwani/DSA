#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>ShortestPath(vector<vector<int>>& edges, int N, int M, int src){
        
        //create an adj list
        vector<int>adj[N];
        
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> dist(N, 1e9);
        
        dist[src] = 0;
        
        queue<int>q;
        q.push(src);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it: adj[node]){
                if (dist[node] + 1 < dist[it]){
                    dist[it] = 1 + dist[node];
                    q.push(it);
                }
            }
        }
        
        for(int i = 0; i < N; i++){
            if(dist[i] == 1e9){
                dist[i] = -1;
            }
        }
        return dist;
        
    }
};
int main() {
    // number of vertices and edges
    int N = 9, M = 10;
    
    vector<vector<int>>edges {
        {0, 1}, {0, 3}, {3, 4}, {4, 5}, {5, 6},
        {1, 2}, {2, 6}, {6, 7}, {7, 8}, {6, 8}
    };
    
    Solution obj;
    vector<int> ans = obj.ShortestPath(edges, N, M, 0);
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}