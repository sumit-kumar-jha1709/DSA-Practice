int sumOf(int n){
	if(n==1) return 1;	
	int sum=n+1;
	int checkTill=n/2;
	for(int i=2;i<=checkTill;i++){
		if(n%i==0) sum+=i;
	}
	return sum;
}

int sumOfAllDivisors(int n){
	// Write your code here.
	int ans=0;
	for(int i=1;i<=n;i++){
	
			ans+=sumOf(i);
		
	}

	return ans;
}