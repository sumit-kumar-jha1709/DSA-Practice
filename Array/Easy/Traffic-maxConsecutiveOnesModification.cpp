int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.

	int i=0, j=0, ans=INT_MIN, currZero=0;

	while(j<n){

		if(vehicle[j]==0) currZero++;

		while(currZero>m){
			if(vehicle[i]==0) currZero--;
			i++;
		}
		ans=max(ans, (j-i+1));
		j++;
	}

	return ans;
}
