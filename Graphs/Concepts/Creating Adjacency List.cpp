vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.

    //Create a adjacence list using vector<vector<int>>
    // It represents as, e.g., 0 1 2 , this represents as the node '0' is connected to node '1' and '2'.
    vector<vector<int>>adj(n);

    //So first we initialize the adjacency list with all the nodes.
    //Adjacency list would be for n=4 (with 0 indexing)
    //adj={
    //     {0}
    //     {1}
    //     {2}
    //     {3}
    //   }
    for(int i=0; i<n; i++)
        adj[i].push_back(i);


    //Now we will iterative the edges vector<vector> list (given)
    // edge  containes ={
                        // 1 2
                        // 0 3
                        // 2 3
                        //}
    // This represents that 1->2 and 0->3 and 2->3 also 2<-1, 0<-3 and 2<-3 as this is an undirected graph.
    // So we will take the first element from 0th row and store it in "int u"
    // And will also take the second element from 0th row and store it in "int v"
    // E.g, for the 0th row, u=1 and v=2
    // Now we will push the v for adj[u] as vice versa.
    // i.e. for adj={
    //                 {0}
    //                 {1}{2}
    //                 {2}{1}
    //                 {3}
    //               }
    // For node 1 in the adj list we have added 2 and for 2 we have added 1.
    for(auto i:edges)
    {
        int u=i[0];
        int v=i[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;

}