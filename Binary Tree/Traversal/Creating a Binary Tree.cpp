/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

Node* createTree(vector<int>&arr){
    // Write your code here.
    int n=arr.size();
    if(n==0) return nullptr;

    Node* root=new Node(arr[0]);
    Node* temp;


    queue<Node*> list;

    list.push(root);

    int i=1;
    while(i<n)
    {
        temp=list.front();
        list.pop();
        temp->left=new Node(arr[i++]);
        temp->right=new Node(arr[i++]);
        list.push(temp->left); 
        list.push(temp->right); 
    }

    return root;
    
}