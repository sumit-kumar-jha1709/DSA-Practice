#include <bits/stdc++.h> 

void insert_in_sorted(stack<int>&s, int temp)
{
	if(s.empty()||s.top()<temp)
	{
		s.push(temp);
		return;
	}

	int temp2=s.top();
	s.pop();
	insert_in_sorted(s, temp);
	s.push(temp2);
	return;
}

stack<int> sortStack(stack<int> &s)
{
	// Write code here.
	//Solution 1: Without Recursion, with O(NLogN)
		// vector<int>ans;
		// stack<int>ss;
		// while(!s.empty())
		// {
		// 	int temp=s.top();
		// 	s.pop();
		// 	ans.push_back(temp);
		// }

		// sort(ans.begin(), ans.end());

		// for(auto i:ans)
		// {
		// 	ss.push(i);
		// }
		
		// return ss;
	
	//Solution 2: With Recursion, with O(N)

	if(s.empty()) return s;

	int temp=s.top();
	s.pop();
	sortStack(s);
	insert_in_sorted(s, temp);
	return s;
}