long long getTrappedWater(long long *arr, int n) {
  // Write your code here.
  long long waterStored=0;

  int left=0, right=n-1;
  long long leftMax=0, rightMax=0;  
  while(left<=right)
  {
      if(arr[left]<=arr[right])
      {
          if(arr[left]>=leftMax)
            {
                leftMax=arr[left];
                left++;
            }
        else{
            waterStored+=leftMax-arr[left];
            left++;
        }
      }

      else{
          if(arr[right]>=rightMax)
          {
              rightMax=arr[right];
              right--;
          }
          else{
              waterStored+=rightMax-arr[right];
              right--;
          }
      }
  }

  return waterStored;

}