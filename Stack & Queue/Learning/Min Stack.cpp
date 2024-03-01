#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		vector<pair<int,int>>st;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(st.empty()){
                pair<int,int> p =make_pair(num,num);
                st.push_back(p);
            }else{
                  pair<int, int> p1;
                  p1.first = num;
                  p1.second = min(num, st.back().second);
                  st.push_back(p1);
            }
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			 if (!st.empty()) {
                int topElement = st.back().first;
                st.pop_back();
                return topElement;
            } else {
                return -1;  // Indicate empty stack
            }
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()){
                return -1;
            }else{
                return st.back().first;
            }
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			 if(st.empty()){
                return -1;
            }else{
                return st.back().second;
            }
		}
};