int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid] == k) 
        {
          return {mid};
        } 
        else if (arr[low] <= arr[mid]) 
        {
          if (arr[low] <= k && arr[mid] >= k) {
            high = mid - 1;
          } else
            low = mid + 1;
        } 
        else if(arr[low]>=arr[mid]) {
          if (arr[mid] <= k && arr[high] >= k) {
            low = mid + 1;
          } else
            high = mid - 1;
        }
    }
    return -1;
    
}
