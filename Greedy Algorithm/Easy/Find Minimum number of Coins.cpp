vector<int> MinimumCoins(int n)
{
    // Write your code here
    int notes[]={1, 2, 5, 10, 20, 50, 100, 500, 1000};
    
    vector<int> ans;

    for(int i=8; i>=0; i--)
    {
        if(notes[i]<=n)
        {
            ans.push_back(notes[i]);
            n-=notes[i];
            i++;
        }
        // Or can use While loop as well
        // while(n >= notes[i])
        // {
        //     ans.push_back(notes[i]);
        //     n-=notes[i];
        // }
    }

    return ans;
}