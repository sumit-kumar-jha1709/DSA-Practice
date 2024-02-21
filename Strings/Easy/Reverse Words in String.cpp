#include <bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.	
	stack<string> s;
    int n=str.size();
    int index=0;
    for(int i=0;i<=n;i++)
	{
         if(str[i]==' ' || i==n)
		 {
            string nnn=str.substr(index,i-index);
            if(!nnn.empty())
             s.push(nnn);
          index=i+1;
        }
    }   
    int nn=s.size();
    string ns="";
    for(int i=0;i<nn;i++){
          if(s.top()!=" ")
          ns+=s.top()+" ";
          s.pop();
    }
    if(!ns.empty() && ns.back()==' ')
    ns.pop_back();
    return ns;

}