long long calculateTotalHours(vector<int>&v, int h)
{
    long long totalH=0;
    int n=v.size();

    for(int i=0; i<n; i++)
    {
        totalH+=ceil((double)(v[i])/(double)(h));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int low=1, high=*max_element(v.begin(), v.end());

    while(low<=high)
    {
        long long mid=low+(high-low)/2;
        long long totalHours=calculateTotalHours(v, mid);

        if(totalHours<=(long long)(h))
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
}