// To find the total number of "undirected" graphs by N vertices 
// can be acheived by 2^(N(N-1)/2);

int countingGraphs(int N)
{
    // Write your code here.
    int power=N*(N-1)/2;

    return pow(2,power);
}