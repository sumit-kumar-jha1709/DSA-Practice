/*
 * class Node
 * {
 * public:
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node() : data(0), left(nullptr), right(nullptr){};
 *     Node(int x) : data(x), left(nullptr), right(nullptr) {}
 *     Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
 * };
 */


//The Minimum value is always stored at the very left node, i.e., the last left node of the BST.
//So, first we will assign the value of root to a temp, so, no change may be reflected to the original root.
//Now, we will check if there any left exist of the temp, if yes then we will move temp to its left.
//Else if no left exist, it means it is the minimum value, so we return the temp->data.
//If the while loop completes and nothing returns, which means the given tree is empty, so, we will return -1.
int minVal(Node* root){
	// Write your code here.	
	Node* temp=root;

	while(temp)
	{
		if(temp->left == nullptr)
			return temp->data;

		else if(temp->left)
		{
			temp=temp->left;
		}
	}

	return -1;
}