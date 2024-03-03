#include <bits/stdc++.h>

vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here

	//Solution 1: Using Array with TC-O(N^2) SC-O(N)
		// vector<int> ans;
		// int i=0;
		// while(i<n)
		// {
		// 	int value=arr[i];
		// 	int result=-1;

		// 	for(int j=i+1; j<n; j++)
		// 	{
		// 		if(arr[j]>value)
		// 		{
		// 			result=arr[j];
		// 			break;
		// 		}
		// 	}
		// 	ans.push_back(result);
		// 	i++;
		// }

		// return ans;


	//Solution 2: Using Stack with TC-O(N) SC-O(N)
	vector<int> ans(n,-1);
	stack<int> st;

	for(int i=n-1; i>=0; i--)
	{
		while(!st.empty() && st.top()<=arr[i])
		{
			st.pop();
		}
		if(!st.empty())
		{
			ans[i]=st.top();
		}
			st.push(arr[i]);

	}
	return ans;
}