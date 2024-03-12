#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here

    //Solution 1: TC-O(NlogN) SC-O(1)
        //sort(arr.begin(), arr.end());

    //Solution 2: TC-O(N) SC-O(1)
    int start=0, mid=0, end=n-1;

    while(mid<=end)
    {
        if(arr[mid]==0)
        {
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid], arr[end]);
            end--;
        }
    }
   
}
