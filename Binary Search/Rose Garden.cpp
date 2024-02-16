
int possible(vector<int>arr, int k, int m, int mid)
{
	int n=arr.size();
	int cnt=0;
	int noOfB=0;

	for(int i=0; i<n; i++)
	{
		if(arr[i]<=mid)
		{
			cnt++;
		}
		else{
			noOfB+=(cnt/k);
			cnt=0;
		}
	}
	noOfB+=(cnt/k);

	return noOfB>=m;
}

int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	int n=arr.size();
	if(m*k>n) return -1;
	
	int low=*min_element(arr.begin(), arr.end());
	int high=*max_element(arr.begin(), arr.end());
	
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(possible(arr,k,m, mid)){
			high=mid-1;
		}
		else low=mid+1;
	}

	return low;
}