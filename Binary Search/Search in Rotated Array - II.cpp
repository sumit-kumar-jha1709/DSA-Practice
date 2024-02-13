bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int vectorSize=A.size();
    int low=0, high=vectorSize-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(A[mid]==key) return true;
        
        //Edge case
        if (A[low] == A[mid] && A[mid] == A[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        else if(A[low]<=A[mid])
        {
            if(A[low]<=key && A[mid]>=key)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        else if(A[low]>=A[mid])
        {
            if(A[mid]<=key && A[high]>=key)
            {
                low=mid+1;
            }
            else high=mid-1;
        }
    }


    return false;


}
