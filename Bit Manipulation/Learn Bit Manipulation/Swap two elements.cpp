void swapNumber(int &a, int &b) {
	// Write your code here.
	//Solution 1: Easy with swap();
		//swap(a,b)
	
	//Solution 2: XOR
	a=a^b;
	b=a^b;
	a=a^b;
}