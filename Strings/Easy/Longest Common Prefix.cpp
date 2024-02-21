class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        string ans;
        sort(arr.begin(),arr.end());
        int j = arr[0].size();
        int len = arr.size();

        for(int i = 0;i < j;i++)
        {
            if(arr[0][i] == arr[len-1][i])
            ans.push_back(arr[0][i]);
            else break;
        }
        return ans==""?"":ans;
    }
};