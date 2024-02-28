bool isPowerOfTwo(int n) {
  // Write your code here.
 
  //Solution 1
    // if(n<=0) return false;
    // int a=n&(n-1);

    // if(a!=0) return false;
    // return true;

  //Solution 2: With less token
  
    if(n<=0) return false;
    return (n&(n-1))==0;



}