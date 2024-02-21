bool areIsomorphic(string &str1, string &str2)
{
    // Write your code here
    
    //Solution 1:
    //Below Solution solves in O(nlogn)
    
    // sort(str1.begin(), str1.end());
    // sort(str2.begin(), str2.end());
    // int n=str1.size();
    // int m=str2.size();
    // int count1=1, count2=1;
    // if(m!=n){
    //     return 0;
    // }

    // for(int i=0; i<n-1; i++)
    // {
    //     if(str1[i]!=str1[i+1]) count1++;
    //     if(str2[i]!=str2[i+1]) count2++;
    // }

    // if(count1==count2) return 1;
    // return 0;

    //Solution 2: 
    //Below is the Solution with O(n) using maps

    unordered_map<char, char> str,strr;
    if (str1.length() != str2.length()) return false;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str.find(str1[i]) != str.end()||strr.find(str2[i])!=strr.end())
        {
            if (str[str1[i]] != str2[i]||strr[str2[i]]!=str1[i])
            {
                return false;
            }
        }
        else
        {
            str[str1[i]] = str2[i];
            strr[str2[i]]=str1[i];
        }
    }
    return true;
}