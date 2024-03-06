int assignCookie(vector<int> &greed, vector<int> &size) {
	// Write your code here.
    //TC- O(nlogn)+o(mlogm)+o(n+m)
    // if n==m => TC - 2O(nlogn)+o(2n), i.e, TC - O(nlogn)+O(n) which makes the TC - O(nlogn)
	int greedSize=greed.size();
	int sizeSize=size.size();

	if(greedSize==0 || sizeSize==0) return 0;
	sort(greed.begin(), greed.end()); 
	sort(size.begin(), size.end());

	int greedPtr=0, sizePtr=0, count=0;

	while(greedPtr!=greedSize && sizePtr!=sizeSize)
	{
		if(greed[greedPtr]<=size[sizePtr])
		{
			count++;
			greedPtr++;
			sizePtr++;
		}
		else sizePtr++;
	} 


	return count;

}
