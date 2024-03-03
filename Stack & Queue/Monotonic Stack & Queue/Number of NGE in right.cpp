#include<bits/stdc++.h>
vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    // Write your code here.
    int n=arr.size();
    int m=query.size();

    vector<int> ans;
    stack<int> st;

    for(int i=0; i<m; i++)
    {
        st.push(arr[query[i]]);
        int count=0;
        for(int j=query[i]+1; j<n; j++)
        {
            if(arr[j]>st.top()){
             count++;
            }
        }
        ans.push_back(count);
        count=0;
    }

    return ans;
}