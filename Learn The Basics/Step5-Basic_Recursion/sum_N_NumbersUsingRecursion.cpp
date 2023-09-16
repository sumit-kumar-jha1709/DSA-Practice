void sum(long long n, long long &ans){
    if(n==0)
        return;
    else
        ans=ans+n;
        sum(n-1, ans);
}


long long sumFirstN(long long n) {
    // Write your code here.
    long long ans=0;
    sum(n, ans);
    return ans;
}