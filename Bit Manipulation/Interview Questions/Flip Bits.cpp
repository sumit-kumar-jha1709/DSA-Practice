int flipBits(int A, int B){
    // Write your code here.
    int n=A^B;
    int count=0;

    while(n){
        if(1&n)
        {
            count++;
            n=n>>1;
        }
        else n=n>>1;
    }

    return count;

}