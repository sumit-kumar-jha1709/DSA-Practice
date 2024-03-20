#include <bits/stdc++.h>
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    
    //Solution 1: With TC-O(N) SC-O(N)
        // queue<int> positive;
        // queue<int> negative;

        // int n=a.size();

        // for(int i=0; i<n; i++)
        // {
        //     if(a[i]>0)
        //         positive.push(a[i]);
        //     else
        //         negative.push(a[i]);
        // }

        // vector<int>ans;

        // for(int i=0; i<n/2; i++)
        // {
        //     ans.push_back(positive.front());
        //     positive.pop();
        
        //     ans.push_back(negative.front());
        //     negative.pop();
        // }

        // return ans;

    //Solution 2: With TC-O(N) SC-O(1)

        int n=a.size();
        vector<int> ans(n);
        int posIndex=0, negIndex=1;

        for(int i=0; i<n; i++)
        {
            if(a[i]>0)
            {
                ans[posIndex]=a[i];
                posIndex+=2;
            }
            else 
            {
                ans[negIndex]=a[i];
                negIndex+=2;
            }
        }

        return ans;

}