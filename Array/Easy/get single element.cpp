#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int size=arr.size();
	for(int i=0; i<size-1; i+=2 )
	{
		if(arr[i]!=arr[i+1])
		{
			return arr[i];
		}
	}

	return arr[size-1];
}