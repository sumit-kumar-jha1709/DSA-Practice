int createAtoi(string s) {
    // Write your code here.
    int ans=0;
    bool sign=true;
    int strSize=s.size();
    int i=0;
    while(i<strSize)
    {
        while(i<strSize && s[i]=='/0'){
            i++;
        }
        if(i<strSize && s[i]=='-'){
            sign=false;
            i++;
        }
        else if(i<strSize && s[i]=='+'){
            i++;
        }

        while(i<strSize && s[i]-'0'>=0 && s[i]-'0'<=9){
            if(!sign){
                if(-ans<=INT_MIN/10)
                return INT_MIN;
                else{
                    ans=ans*10+s[i]-'0';
                }
            }
            else{
                if(ans>=INT_MAX/10){
                    return INT_MAX;
                }
                ans=ans*10+s[i]-'0';
            }
            i++;
        }
        break;
    }
    if(!sign) return -ans;
    return ans;
}   