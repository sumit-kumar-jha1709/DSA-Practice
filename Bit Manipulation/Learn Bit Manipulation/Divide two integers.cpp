int divideTwoInteger(int dividend, int divisor) {
	// Write your code here.
	//Solution 1: Easy, use the Divison operator, O(1) both space and time
		//return dividend/divisor;

	//Solution 2: 
	 int count=0;
	 int sign=-1;
	 if((dividend<0 && divisor<0)||(dividend>0 && divisor>0))
	 {
		 sign=1;
	 }
	 int greater=abs(dividend);
	 int smaller=abs(divisor);

	 while(greater>=smaller)
	 {
		 count++;
		 greater-=smaller;
	 }

	 return sign*count;

} 	
