vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int large=INT_MIN;
    int second_large=INT_MIN;
    int small=INT_MAX;
    int second_small=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]<small){
            second_small=small;
            small=a[i];
        }
        else if(a[i]<second_small && a[i]!=small)
        {
            second_small=a[i];
        }

        if(a[i]>large){
            second_large=large;
            large=a[i];
        }
        else if(a[i]>second_large && a[i]!=large)
        {
            second_large=a[i];
        }
    }
    // for(int i=0;i<n;i++)
    // {
        
    // }

    vector<int> ans;
    ans.push_back(second_large);
    ans.push_back(second_small);

    return ans;

}
