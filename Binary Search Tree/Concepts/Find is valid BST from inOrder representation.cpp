//InOrder representation always gives an array in ascending order.
//And in BST every element has to be unique.
// So if the next element is smaller or equal to the previous one then it is not a valid BST.
bool isValidBST(vector<int> &order){
    // Write your code here.
    for(int i=0; i<order.size()-1; i++)
    {
        if(order[i+1]<=order[i])
        {
            return false;
        }
    }
    return true;
}
