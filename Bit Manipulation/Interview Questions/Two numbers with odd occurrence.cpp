vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    int zor=0;
    int arrSize=arr.size();
    for(int i=0; i<arrSize; i++)
    {
        zor=zor^arr[i];
    }


    int pos=0;

    while((zor&(1<<pos))==0) pos++;

    int num1=0;

    for(int j=0;j<arrSize; j++)
    {
        if((arr[j]&(1<<pos))!=0)
        {
            num1=num1^arr[j];
        }
    }

    int num2=num1^zor;

    if(num1<num2) swap(num1, num2);
    vector<int> ans={num1, num2};

    return ans;
}