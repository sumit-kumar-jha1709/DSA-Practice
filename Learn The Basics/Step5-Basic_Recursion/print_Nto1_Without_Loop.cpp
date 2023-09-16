void print(int n, vector<int>&ans){
    if(n==0)
        return;
    else    
        ans.push_back(n);
        print(n-1, ans);
}


vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    print(x, ans);
    return ans;
}