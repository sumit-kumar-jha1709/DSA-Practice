#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here

	//Solution 1: Using map to store the count of each element.
		//In case of using ordered_map: TC-O(N*logN)+O(N) SC-O(N)
		//In case of using unordered_map: TC-O(N)+O(N) SC-O(N)
			// unordered_map<int, int>mp;

			// int n=v.size();

			// for(int i=0; i<n; i++)
			// {
			// 	mp[v[i]]++;
			// }

			// for(auto it:mp)
			// {
			// 	if(it.second>n/2)
			// 	{
			// 		return it.first;
			// 	}
			// }

			// return -1;

	// Solution 2: TC-O(N) SC-O(1)
		// Intution: If an element appears to be >n/2 times then it can't be cancelled.

		int count=0, element;
		int n=v.size();

		for(int i=0; i<n; i++)
		{
			if(count==0)
			{
				count++;
				element=v[i];
			}
			else if(v[i]==element) count++;
			else count--;
		}

		return element;


}