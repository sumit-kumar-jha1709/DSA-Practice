//When the adjacency list is given
class Solution{
public:
void dfs(int node, vector<int>adj[], int vis[], vector<int>&df)
    {
        vis[node]=1;
        df.push_back(node);
        
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it, adj, vis, df);
            }
        }
    }

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        int start=0;
        
        vector<int> df;
        dfs(start, adj, vis, df);
        
        return df;
    }
}


//When the adjacency list is not given
#include <bits/stdc++.h>
using namespace std;

void dfs(int start, vector<int> adj[], vector<int> &innerAns, int vis[]) {
  vis[start] = 1;
  innerAns.push_back(start);
  for (auto it : adj[start]) {
    if (!vis[it]) {
      dfs(it, adj, innerAns, vis);
    }
  }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {
  // Creating adjacency list
  vector<int> adj[V];
  for (int it = 0; it < edges.size(); it++) {
    int u = edges[it][0];
    int v = edges[it][1];
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
 
  int vis[V] = {0};
  
  vector<vector<int>> ans;
  
  for (int it = 0; it < V; it++) {
    if (!vis[it]) {
      vector<int> innerAns;
      dfs(it, adj, innerAns, vis);
      ans.push_back(innerAns);
    }
  }

  return ans;

}