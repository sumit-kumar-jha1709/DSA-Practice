int powerOf2(int n)
{
    int x=0;
    while((1<<x)<=n)
    {
        x++;
    }

    return x-1;
}
int countSetBits(int n) {
    //Write your code here
    if(n==0) return 0;

    //Step 1: First we will find the highest power of 2 which is either equals or less than given n.
    int x=powerOf2(n);
    //Step 2: x, highest power of 2, we can find the count of set bits from 1 to 2^x-1 using the formula, count=x*(2^x-1)
    int countFrom1tox=x*(1<<(x-1));
    //Step 3: Now we have only from 2^x to n digits left to count their sets.
    // Here MSB, the leftmost bit, is 1 for all the numbers left, so count=n-2^x+1 
    int MSBfromXtoN=n-(1<<x)+1;

    //Step 4: Now after counting the MSB, we have converted the left 2^x to n numbers into 0 to n-2^x numbers
    // We will put this number into recursion to count the sets. 
    int rest=n-(1<<x);

    int ans=countFrom1tox+MSBfromXtoN+countSetBits(rest);

    return ans;
}