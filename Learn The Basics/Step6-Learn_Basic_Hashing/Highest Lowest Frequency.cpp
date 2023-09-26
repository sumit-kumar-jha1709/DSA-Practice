map<int,int> mpp; //map stores key,frequency
    vector<int> ans;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    int min=INT_MAX;
    int max=INT_MIN;
    int a,b;
    for(auto it:mpp){
        if(it.second>max){
            max=it.second;
            a=it.first;
        }
        if(it.second<min){
            min=it.second;
            b=it.first;
        }
    }
    ans.push_back(a);
    ans.push_back(b);

    return ans;