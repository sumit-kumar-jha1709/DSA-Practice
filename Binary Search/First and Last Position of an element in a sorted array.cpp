pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int low=0, high=n-1;
    int firstIndex=n;

    //to find the first index 
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]>=k)
        {
            firstIndex=mid;
            high=mid-1;
        }
        else low=mid+1;
    }


    //to find the last index
    low=0, high=n-1;
    int lastIndex=n;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>k)
        {
            lastIndex=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    if(firstIndex==n || arr[firstIndex]!=k) return {-1,-1};
    return {firstIndex, lastIndex-1};
    
}
