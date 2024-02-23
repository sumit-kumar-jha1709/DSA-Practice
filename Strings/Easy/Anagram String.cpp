#include <bits/stdc++.h>
bool isAnagram(string str1, string str2)
{
    //Write your code here

    //Solution 1: O(NlogN) complexity
        // int size1=str1.size();
        // int size2=str2.size();

        // if(size1!=size2) return false;

        // sort(str1.begin(), str1.end());
        // sort(str2.begin(), str2.end());

        // if(str1==str2) return true;
        // return false;
    
    //Solution 2: O(N) complexity

    int size1=str1.size();
    int size2=str2.size();

    int freq[26]={0};

    for(int i=0; i<size1; i++)
    {
        freq[str1[i]-'a']++;
    }

    for(int i=0; i<size2; i++)
    {
        freq[str2[i]-'a']--;
    }

    for(int i=0; i<26; i++)
    {
        if(freq[i]!=0) return false;
    }

    return true;

    


}