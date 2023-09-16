#include <bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	int noOfDigits=0;
	int actualNo=n;
	int copyNo=n;
	int sum=0;

	while(n!=0){
		noOfDigits++;
		n/=10;
	}

	while(actualNo!=0){
		int base = actualNo%10;
		sum+= pow(base,noOfDigits);
		actualNo/=10;
	}

	if (sum == copyNo) {
			return true;
	}
	else return false;
}
