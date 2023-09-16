string compareIfElse(int a, int b) {
	// Write your code here
	string answer;
	if(a==b) answer="equal";
	else answer= (a>b)? "greater":"smaller";
	return answer;
}
