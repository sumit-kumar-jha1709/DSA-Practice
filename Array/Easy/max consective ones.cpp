class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> counterArray;
        int size=nums.size(), cnt=0;
        for(int i=0; i<size; i++)
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            else{
                counterArray.push_back(cnt);
                cnt=0;
            }
        }

        counterArray.push_back(cnt);

        int maxConsecutiveOnes=*max_element(counterArray.begin(), counterArray.end());
        return maxConsecutiveOnes;
    }
};