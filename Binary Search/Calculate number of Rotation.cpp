#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.   
    int n=arr.size();
    int low=0, high=n-1;
    int ans=INT_MAX;
    int index=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        //if the array is not rotated
        if(arr[low]<=arr[high])
        {
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            break;
        }

        //if the left side is sorted
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<ans)
            {
                index=low; 
                ans= arr[low];
            }
            //eliminate left side
            low=mid+1;
        }
        else
        {
            if(arr[mid]<ans)
            {    
                index=mid;
                ans=arr[mid];
            }
            //eliminate left side
            high=mid-1;
        }
    }

    return {index};
}