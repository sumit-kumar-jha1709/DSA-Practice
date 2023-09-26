void selectionSort(vector<int>&arr) {
    // Write your code here.

    int n=arr.size();
    for(int i=0; i<n-1; i++){
        int minI=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minI]){
                minI=j;
            }
        }

        int temp=arr[minI];
        arr[minI]=arr[i];
        arr[i]=temp;
    }
}