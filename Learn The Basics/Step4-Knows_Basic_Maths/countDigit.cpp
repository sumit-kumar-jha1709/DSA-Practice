int countDigits(int n){
	// Write your code here.
	int noOfDigits=0;
	int num=n;
	while(n!=0)
	{
		int rem = n%10;
		
		if (rem!=0 && num % rem == 0) {
			noOfDigits++;
			
		}
        n/=10;
		
	}	
	
	return noOfDigits;
	
}