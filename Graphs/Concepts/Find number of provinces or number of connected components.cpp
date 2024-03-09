void dfs(int node,vector<vector<int>>& roads, int* vis)
{
    vis[node]=1;
    for(int i=0; i<roads.size(); i++)
    {
        if(roads[node][i]==1 && vis[i]==0)
        {
            dfs(i,roads,vis);
        }
    }
}
int findNumOfProvinces(vector<vector<int>>& roads, int n) {
    // Write your code here

    int vis[n] = {0};

    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            ans++;
            dfs(i,roads,vis);
        }
    }

    return ans;

}