bool isValidParenthesis(string s)
{
    // Write your code here.
    int big=0, med=0, small=0;
    int strSize=s.size();
    for(int i=0; i<strSize; i++)
    {
        if(s[i]=='[' ) big++;
        else if (s[i] == '{')
          med++;
        else if (s[i] == '(')
          small++;

        else if (s[i] == ']')
          big--;
        else if (s[i] == '}')
          med--;
        else if (s[i]==')')
          small--;
        
    }

    return (big==0&&med==0&&small==0) ? true:false;
}