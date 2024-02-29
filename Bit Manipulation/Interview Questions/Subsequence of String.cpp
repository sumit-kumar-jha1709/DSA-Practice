// When the input and output both are strings
#include <bits/stdc++.h> 
vector<string> subsequences(string str){
	// Write your code here
	int strSize=str.size();
	int totalPossibleSubsequences=(1<<strSize)-1;

	vector<string> subSeq;
	for(int i=1; i<=totalPossibleSubsequences; i++)
	{
		string s="";
		for(int j=0; j<strSize; j++)
		{
			if(i&(1<<j))
			{
				s+=str[j];
			}
		}
		subSeq.push_back(s);
	}

	return subSeq;
	
}


//When input and output both are integers
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int numsSize=nums.size();
        int totalCombinations=(1<<numsSize)-1;

        vector<vector<int>>ans;

        for(int i=0; i<=totalCombinations; i++)
        {
            vector<int> arr;
            for(int j=0; j<numsSize; j++)
            {
                if(i&(1<<j))
                {
                    arr.push_back(nums[j]);
                }
            }

            ans.push_back(arr);
        }

        return ans;

    }
};