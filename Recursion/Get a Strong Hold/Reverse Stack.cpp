#include<bits/stdc++.h>
void oppositeStack(stack<int>&stack, int temp)
{
    if(stack.empty())
    {
        stack.push(temp);
        return;
    }
    int temp2=stack.top();
    stack.pop();
    oppositeStack(stack,  temp);
    stack.push(temp2);
    return;
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()) return;
    int temp=stack.top();
    stack.pop();
    reverseStack(stack);
    oppositeStack(stack, temp);
    
}