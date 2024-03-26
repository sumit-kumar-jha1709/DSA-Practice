vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    
    //Solution 1: Brute Force O(N^2)
        // int n=a.size();
        // vector<int>ans;
        // for(int i=0; i<n-1; i++)
        // {
        //     int val=a[i];
        //     bool indi=true;
        //     for(int j=i+1; j<n; j++)
        //     {
        //         if(a[j]>=val)
        //         {
        //             indi=false;
        //             break;
        //         }
        //     }
        //     if(indi==true)
        //     {
        //         ans.push_back(val);
        //     }
        // }
        // ans.push_back(a[n-1]);
        // sort(ans.begin(), ans.end());
        // return ans;


  //Solution 2: Optimal Solution: O(N)
   int n=a.size();
   vector<int> ans;

   int temp=a[n-1];
   ans.push_back(temp);

   for(int i=n-2; i>=0; i--)
   {
       if(a[i]>temp)
       {
           ans.push_back(a[i]);
       }
       temp=max(temp, a[i]);
   }

   return ans;
}