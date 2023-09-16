void repeat(int n, vector<string>&ans){
	if(n==0)
		return;
	else
		repeat(n-1,ans);
		ans.push_back("Coding Ninjas");
}


vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> ans;
	repeat(n,ans);
	return ans;
}