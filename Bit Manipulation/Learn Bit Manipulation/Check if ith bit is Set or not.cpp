bool isKthBitSet(int n, int k)
{
    // Write your code here.
    //Solution 1: With O(n)
        // vector<int> bits;
        // while(n>0)
        // {
        //     bits.push_back(n%2);
        //     n=n/2;
        // }

        // if(bits[k-1]==1) return true;
        // return false;
    
    //Solution 2: With O(1)

        int ans=n&(1<<(k-1));
        if(ans==0) return false;
        return true;
}