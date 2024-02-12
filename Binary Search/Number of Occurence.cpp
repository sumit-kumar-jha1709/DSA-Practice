int lowerBound(vector<int>&arr, int n, int k)
{
	int low=0, high=n-1;
	int ans=n;

	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]>=k)
		{
			ans=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
	return ans;
}
int upperBound(vector<int>&arr, int n, int k)
{
	int low=0, high=n-1;
	int ans=n;

	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]>k)
		{
			ans=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
	return ans;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int lb=lowerBound(arr, n, x);
	int ub=upperBound(arr, n, x);

	if(lb==n || arr[lb]!=x) return {0};
	int space=ub-lb;
	int occurance=0;
	occurance+=space;
	return occurance;

}
