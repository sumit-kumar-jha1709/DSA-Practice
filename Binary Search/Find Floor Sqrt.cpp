int floorSqrt(int n)
{
    // Write your code here.
    int low=1, high=n;
    while(low<=high)
    {
        long long mid = low+(high-low)/2;
        long long cal=mid*mid;
        if(cal<=(long long)(n))
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    return high;
}
