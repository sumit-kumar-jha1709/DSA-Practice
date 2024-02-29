int missingNumber(int n, vector<int> &arr){
    // Write your code here.
    int ans=0;
    int arrSize=arr.size();
    for(int i=0;i<arrSize; i++)
    {
        ans=ans^arr[i];
    }

    return ans;

}