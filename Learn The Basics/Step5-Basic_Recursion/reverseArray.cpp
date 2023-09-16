void reverse(int size, vector<int> &arr, vector<int> &ans){
    if(size==0)
        return;
    else
        ans.push_back(arr[size-1]);
        reverse(size-1, arr,ans);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int> ans;
    reverse(n,nums, ans);
    return ans;
}
