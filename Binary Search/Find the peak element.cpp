int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n=arr.size();
    //edge cases
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return (n-1);

    int low=1, high=n-2;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        //if mid is the peak element
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;
        }

        //if we are in the left
        if(arr[mid]>arr[mid-1]) low=mid+1;

        //if we are in the right
        else high=mid-1;


    }

    return -1;

   
}
