string read(int n, vector<int> nums, int target)
{
    // Write your code here
    
    //Solution 1: With TC-O(N^2)
        // int flag=0;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     for(int j=0; j<nums.size(); j++)
        //     {
        //         if(i!=j)
        //         {
        //             if(nums[i]+nums[j]==target)
        //             {
        //                 flag=1;
        //             }
        //         }
        //     }
        // }
        
        // return ((flag==1) ?  "YES" :  "NO");
    

    sort(nums.begin(), nums.end());
    int firstIndex=0, lastIndex=nums.size()-1;


    while(firstIndex<lastIndex)
    {
        int sum=nums[firstIndex]+nums[lastIndex];

        if(sum>target)
        {
            lastIndex--;
        }
        else if(sum<target)
        {
            firstIndex++;
        }
        else{
            return "YES";
        }
    }

    return "NO";
}