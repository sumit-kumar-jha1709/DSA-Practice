int XOR(int n)
{
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;

}
int findXOR(int L, int R){
    // Write your code here.
    int ans=XOR(R)^XOR(L-1);
    return ans;
}