bool good(int x , int dig){
	int zeros = 0 , n = x ;
	// checks if digit is not included in the number 
	while(n>0){
		if((n%10) != dig) n= n/10 ;
		else return false ;
	}
	// checks for good number 
	while(x>=10){
		zeros += x%10;
		if((x/10)%10>zeros){
			x = x/10 ;
		}
		else return false;
	}
	return true  ;
}

vector<int> goodNumbers(int a, int b, int digit) {
    // Write your code here.
    vector<int>v ;
    for (int i = a; i <= b; i++) {
            if (good(i, digit) == true)
                v.push_back(i);
    }
    return v;
}