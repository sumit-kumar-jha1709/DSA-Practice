#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    // Write your code here.
        //Solution 1: With TC-O(N^2) SC-O(1) 
        
        //Description: We will take a variable "maxProfit" to store the maximum Profit.
        //We will use two loops, 
        // 1st i will traverse from 0->N(size of the array given)
        // While 2nd j will traverse from i->N
        // If the arr[j]>arr[i] then we will take their difference.
        // At last we compare the above calculated difference with maxProfit, and
        // if diff > maxProfit then we will store diff to maxProfit.

        //At the loop ends we will return the maxProfit.

        //Code: -
            //    int maxProfit=0;

            //    for(int i=0; i<arr.size(); i++)
            //    {
            //        for(int j=i+1; j<arr.size(); j++)
            //        {
            //            if(arr[j]>arr[i])
            //            {
            //                int diff=arr[j]-arr[i];
            //                if(diff>maxProfit)
            //                {
            //                    maxProfit=diff;
            //                }
            //            }
            //        }
            //    }

        //    return max;

    //Solution 2: With TC-O(N) SC-O(1)
        //Description: We will keep "maxProfit" variable to maintain the maximum profit.
        // We will take a "min" variable assigned the INT_MAX;
        // We will run the loop from 0->N (size of the array given)
        // If the arr[i]>min then we will update min=arr[i].
        // Then we will take a temporary variable "diff" to store diff b/w "min" and "arr[i]".
        // So, diff=arr[i]-min.
        // And if diff>maxProfit then we will assign maxProfit=diff.
        //At the end, we will return maxProfit.

        //Code: -

        int maxProfit=0, mini=INT_MAX;

        int n=arr.size();

        for(int i=0; i<n; i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
            int diff=arr[i]-min;

            if(diff>maxProfit)
            {
                maxProfit=diff;
            }

            // or can write the above code as
            // rename "min" variable as "mini" then, 
            // mini=min(arr[i], mini);
            // maxProfit = max(maxProfit, arr[i]-mini);
        }

        return maxProfit;
}