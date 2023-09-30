#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int firstElement=arr[0];
    vector<int> ans;
    for(int i=1; i<n; i++)
    {
        ans.push_back(arr[i]);
    }

    ans.push_back(firstElement);

    return ans;
}
