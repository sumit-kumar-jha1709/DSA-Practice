/*
    Following is the Binary Tree node structure:

    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };

*/


// In BST the left node contains data is smaller than root's data, and the right node contain data that is greater than the root's data.
// So, First we will put the root in a temp pointer, why? so, that out root won't get changed.
// Now, we will check if the temp's data is equal to the X, if yes return true,
// If not then we will check if X is greater than temp' data, if yes then we will move temp to the left side, if no then we will move temp to right side.
// If the iteration completes and nothing returns while the process, so the value X is not there and we will return false.
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    BinaryTreeNode<int>* temp=root;

    while(temp)
    {
        if(temp->data==x)
            return true;
        else if(temp->data > x)
            temp=temp->left;
        else temp=temp->right;
    }

    return false;
}