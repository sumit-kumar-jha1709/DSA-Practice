/*
CodeStudio: -

You have been given an array 'a' of 'n' non-negative
integers.You have to check whether the given array is sorted in
the non-decreasing order or not.
Your task is to return 1 if the given array is sorted. Else, return 0.
*/

int isSorted(int n, vector<int> a) {
    // Write your code here.

    bool sorted=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]){
            sorted=0;
        break;
        }

    }

    return sorted;
}

/*
    
*/