bool lemonadeChange(vector<int> &bill) {
	// Write your code here.
	int five=0, ten=0;
	for(int i=0; i<bill.size(); i++)
	{
		if(bill[i]==5)
		{
			five++;
		}
		else if(bill[i]==10)
		{
			if(five<0) return false;
			five--;
			ten++;
		}
		else if(bill[i]==20)
		{
			if(five>0 && ten>0)
			{
				five--;
				ten--;
			}
			else{
				five-=3;
			}
			if(five<0){
				return false;
			}

		}
	}

	return true;
}
