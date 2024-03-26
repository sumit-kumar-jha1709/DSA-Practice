int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.

    //Solution 1: Better Solution: O(NLogN)+O(N)
            //    sort(a.begin(), a.end());

            //    int currCnt=0, longest=1, lastSmaller=INT_MIN;
            //    int n=a.size(); 
            //    for(int i=0; i<n; i++)
            //    {
            //        if(a[i]-1==lastSmaller)
            //        {
            //            currCnt++;
            //            lastSmaller=a[i];
            //        }
            //        else if(a[i]!=lastSmaller)
            //        {
            //            currCnt=1;
            //            lastSmaller=a[i];
            //        }
            //       longest=max(longest, currCnt);
            //    }


            //    return longest;


    //Solution 2: Optimal Solution: O(N)

        int n=a.size();
        int  longest=1;

        unordered_set<int>st;
        for(int i=0; i<n; i++)
        {
            st.insert(a[i]);
        }

        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt=1;
                int x=it;

                while(st.find(x+1)!=st.end())
                {
                    x=x+1;
                    cnt+=1;
                }

                longest=max(longest, cnt);
            }
        }

        return longest;
    
}