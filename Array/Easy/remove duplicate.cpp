int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			count++;
		}
	}

	
	return n-count;
}