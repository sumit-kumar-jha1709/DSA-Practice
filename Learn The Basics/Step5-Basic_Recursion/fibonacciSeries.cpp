/*
    Using loop
*/

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans;
    int first=0, second=1, third;
    ans.push_back(first);
    if(n==1) return ans;
    ans.push_back(second);
    if(n==2) return ans;
    for(int i=0; i<n-2; i++){
        third = first+second;
        ans.push_back(third);
        first=second;
        second=third;
    }

    return ans;
}

/*
    Using Recursion
*/
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
};