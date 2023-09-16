int findGcd(int a, int b){
    if(b==0){
        return a;
    }

    return findGcd(b, a%b);
}


int calcGCD(int n, int m){
    // Write your code here.
    int ans=findGcd(n,m);
    return ans;
}