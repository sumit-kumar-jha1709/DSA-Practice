int possible(vector<int>&arr, int limit, int mid)
{
	int n=arr.size();
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		cnt+=ceil((double)(arr[i])/(double)(mid));
	}

	return cnt<=limit;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int low=1, high=*max_element(arr.begin(), arr.end());

	while(low<=high)
	{
		int mid=low+(high-low)/2;

		if(possible(arr, limit, mid)){
			high=mid-1;
		}
		else low=mid+1;
	}
	return low;
}