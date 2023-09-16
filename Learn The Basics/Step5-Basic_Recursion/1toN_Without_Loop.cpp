void printInt(int n, vector<int>&ans){
    if(n==0)
        return;
    else
        printInt(n-1, ans);
        ans.push_back(n);
}



vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    printInt(x, ans);
    return ans;
}