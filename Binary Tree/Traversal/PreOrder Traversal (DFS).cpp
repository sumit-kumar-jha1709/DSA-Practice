/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void helper(TreeNode<int> * root, vector<int>&v)
{
    if(root==nullptr) return;

    v.push_back(root->data);
    helper(root->left,v);
    helper(root->right,v);
    return;
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> v;
    helper(root,v);
    return v;
}
