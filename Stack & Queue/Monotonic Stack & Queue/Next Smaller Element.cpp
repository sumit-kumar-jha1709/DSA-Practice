#include <bits/stdc++.h>
void immediateSmaller(vector<int>& a)
{
	// Write your code here.
	
	//Solution 1: With TC-O(N) SC-O(N)
		// int n=a.size();
		// vector<int> ans(n,-1);

		// for(int i=0;i<n-1; i++)
		// {
		// 	if(a[i]>a[i+1])
		// 	{
		// 		ans[i]=a[i+1];
		// 	}
		// }

		// for(int i=0;i<n; i++)
		// {
		// 	a[i]=ans[i];
		// }

	//Solution 2: With TC-O(N) SC-O(N)
		// int n=a.size();
		// stack<int> st;
		// st.push(-1);

		// for(int i=n-1; i>=0; i--)
		// {
		// 	int current=a[i];
		// 	if(st.top()>a[i])
		// 	{
		// 		a[i]=-1;
		// 	}
		// 	else{
		// 		a[i]=st.top();
		// 	}

		// 	st.push(current);
		// }



	//Solution 3: With TC-O(N) SC-O(1)

		int n=a.size();

		for(int i=0; i<n-1; i++)
		{
			if(a[i+1]<a[i])
			{
				a[i]=a[i+1];
			}
			else{
				a[i]=-1;
			}
		}
		a[n-1]=-1;
}
