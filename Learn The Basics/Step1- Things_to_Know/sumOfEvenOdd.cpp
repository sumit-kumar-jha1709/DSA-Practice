#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	int even=0, odd=0;
	cin>>n;
	while(n!=0){
		int mod = n%10;
                if (mod % 2 == 0) {
                  even += mod;
                } else {
                  odd += mod;
                }
        n=n/10;
	}

	cout<<even<<" "<<odd;
}
