// int isCyclicRotation(string &p, string &q) 
// {
//     // Write your code here
//     int pSize=p.size();
//     int qSize=q.size();

//     if(pSize!=qSize) return false;

//     p=p+p;
//     int ans=p.find(q);

//     if(ans==-1) return 0;
//     return 1;

    
    
// }

vector<int> computeLPS(string &pattern){

    vector<int> lps(pattern.size(),0);
    int index =0;
    int i = 1;
    while(i<pattern.size()){
        if(pattern[i] == pattern[index]){
            lps[i] = index + 1;
            index++;
            i++;
        }
        else{
            if(index != 0){
                index = lps[index-1];
            }
            else{
                lps[i] =0;
                i++;
            }
        }
    }
    return lps;
}

int match(string &s,string &pattern){
    vector<int> lps = computeLPS(pattern);
    int i = 0;
    int j = 0;
    while(i<s.size()){
        if(pattern[j] == s[i]){
            i++;
            j++;
        }
        if(j == pattern.size()){
            return lps[j-1];
        }
        else if(i<s.size() && pattern[j]!=s[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i+=1;
            }
        }
    }
 
    return -1;
}

int isCyclicRotation(string &p, string &q) 
{

    //Solution 1: Can't handle the edge cases, also with O(M*N) or O(N^2) complexity
        //int pSize=p.size();
        // int qSize=q.size();

        // if(pSize!=qSize) return false;

        // p=p+p;
        // int ans=p.find(q);

        // if(ans==-1) return 0;
        // return 1;

    //Solution 2: With O(M+N) or O(N) complexity
    p += p;
    return match(p,q)!=-1;
}