double myPow(double x, int n) {
    // Write Your Code Here
   //Solution 1: Recursive with 0(n) complexity
        // if(n==0)return 1;
        // if(n<0)
        // {
        //     n=-n;
        //     return (1/x)*myPow(1/x,n-1);
        // }
        //     else{
        //     return x*myPow(x,n-1);
        // }

    //Solution 2: Looped Solution with O(Logn) complexity      
        // double ans=1.0;
        // long nn=n;
        // if(nn<0)nn=-1*n;
        // while(nn>0)
        // {
        //     if(nn%2==1){
        //         ans*=x;
        //         nn-=1;
        //     }
        //     else{
        //         x*=x;
        //         nn/=2;
        //     }
        // }
        // if(n<0) ans=(double)(1.0)/(double)(ans);
        // return ans;

    //Solution 3: Same Solution 2 but in recursive form.
         if(n==0) return 1.0;
    if(n<0){
        return 1.0/myPow(x,-n);
    }
    if(n%2==1){
        return x*myPow(x,n-1);
    }
    else{
        return myPow(x*x, n/2);
    }
}