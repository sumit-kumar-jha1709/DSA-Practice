int numberOfNodes(int N){
    // Write your code here.
    // At N=1 there is 1 node.
    // At N=2 there are 2 nodes.
    // At N=3 there are 4 nodes.
    // At N=4 there are 8 nodes.

    //Here We can clearly see that Nodes at a branch is equal to 2^previous_branch.
    //Hence 2^N-1 gives the no. of nodes at branch N.
    return pow(2,N-1);
}