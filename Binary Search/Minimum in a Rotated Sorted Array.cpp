int findMin(vector<int>& arr)
{
	// Write your code here.
	int n=arr.size();
	int low=0, high=n-1;
	int ans=INT_MAX;

	while(low<=high)
	{
		int mid=low+(high-low)/2;
		// if array is sorted then the very first element is the answer
		if(arr[low]<=arr[high])
		{
			ans=min(ans, arr[low]);
			break;
		}
		//if left part is sorted
		else if(arr[low]<=arr[mid])
		{
			ans=min(ans, arr[low]);
			//eliminate the left side
			low=mid+1;
		}
		//if the right side is sorted
		else{
			ans=min(ans, arr[mid]);
			//eliminate the right side
			high=mid-1;

		}

	}

	return {ans};
	
}