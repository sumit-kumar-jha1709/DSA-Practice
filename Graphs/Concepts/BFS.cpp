vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.

    //We will create a visitor list and assign it to 0
    int vis[n]={0};
    // As the starting node is 0 so, in vis[0] we will assign it 1, symbolises that it is already visited.
    vis[0]=1;
    //We will create a queue that will store all the nodes of a level
    queue<int>q;
    //As BFS starts at 0 so, we will put 0 into the queue
    q.push(0);

    //To store the answer as per the output format.
    vector<int>bfs;

    //BFS traversal: -
    // 1. We will pop the front element of the queue and put it into the bfs vector.
    // 2. We will check if there are any adjacent nodes using provided adj vector.
    // 3. If the adj nodes exists: -
        // 3.a. If the adj node is not visited so we put the node in the queue and assign its visitor position as 1.
        // 3.b. If the adj node is already visited so we will just ignore that node.
    
    //This entire process will keep on going untill the queue is empty and thus we will get out bfs vector.

    // As the while loop will run for the total number of Nodes so TC (While loop) - O(N)
    // As the for loop runs for the nodes neighbour and the nodes neighbour is known as degree and total no. of degree in a graph is 2*Edges.
    // So for loop TC-O(2E)
    // So total TC-O(N)+O(2E)
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
    }

    return bfs;
}