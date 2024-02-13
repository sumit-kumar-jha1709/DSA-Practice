int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n=arr.size();

	//Edge Cases
	if(n==1) return arr[0];
	if(arr[0]!=arr[1]) return arr[0];
	if(arr[n-1]!=arr[n-2]) return arr[n-1];

	int low=1, high=n-2;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		//If the mid element is the single element

		if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
		{
			return arr[mid];
		}


		if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1]))
		{
			//This means that we are on the left side
			//eliminate the left side as the single element is on the right side

			low=mid+1;
		}
		else{
			//we are on the right side
			//eliminate the right side as the single element is on the left side

			high=mid-1;
		}
	}

	return -1;

}