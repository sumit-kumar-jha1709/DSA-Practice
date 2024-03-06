bool isBalanced(string S){
    // Write your code here.
    stack<char> st;

    int size=S.size();

    for (int i = 0; i < size; i++) {
      char ch = S[i];

      if (st.empty() && (ch == ')' || ch =='}' || ch==']'))
      {
          return false;
      }

      if(ch == '(' || ch =='{' || ch=='[')
      {
          st.push(ch);
      }

      if (ch == ']') 
      {
          if (st.top() != '[')
            return false;
          st.pop();
      } 
      
      if (ch == '}') 
      {
          if (st.top() != '{') return false;
          st.pop();
      } 
      
      if (ch == ')') 
      {
          if(st.top()!='(') return false;
          st.pop();
      }
    }
    if(st.empty()) return true;
    return false;
}