int maxDepth(string s) {
	// Write your code here.
	int n=s.size(), cnt=0, maxi=0;

	for(int i=0; i<n; i++)
	{
		if(s[i]=='(')
		{
			cnt++;
		}
		else if(s[i]==')'){
			cnt--;
		}
		maxi=max(maxi,cnt);
	}

	return maxi;
}
