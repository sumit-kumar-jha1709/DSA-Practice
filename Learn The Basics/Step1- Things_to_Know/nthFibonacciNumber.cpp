#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
        if(n==1 || n==2) return 1;
        else
        return fibo(n-1)+fibo(n-2);
}


int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int answer = fibo(n);
        cout<< answer;
}