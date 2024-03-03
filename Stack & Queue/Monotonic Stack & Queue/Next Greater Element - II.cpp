#include<bits/stdc++.h>
vector<int> nextGreaterElementII(vector<int>& a) {
    // Write your code here.
    int n=a.size();
    
    vector<int> ans(n,-1);
    stack<int> st;


    for(int i=(2*n-1); i>=0; i--)
    {
        while(!st.empty() && st.top()<=a[i%n])
        {
            st.pop();
        }
        if(i<n)
        {
            if(!st.empty())
            {
                ans[i]=st.top();
            }
            
        }
        st.push(a[i%n]);
    }
    return ans;
}
