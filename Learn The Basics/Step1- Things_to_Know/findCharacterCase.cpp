#include<iostream>
using namespace std;

int findCharacterCase(char s)
{
	if(isupper(s)){
		return 1;
	}
	else if(islower(s)){
		return 0;
	}
	else return -1;
}

int main() {
	// Write your code here
	char s;
	cin>>s;
	int answer;
	answer=findCharacterCase(s);
	cout<<answer<<endl;
	
}
