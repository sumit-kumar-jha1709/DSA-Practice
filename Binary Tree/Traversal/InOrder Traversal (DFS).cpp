/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void helper(TreeNode* root, vector<int>&v)
{
    if(root==nullptr) return;

    helper(root->left,v);
    v.push_back(root->data);
    helper(root->right,v);
    return;

}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> v;
    helper(root,v);
    return v;
}