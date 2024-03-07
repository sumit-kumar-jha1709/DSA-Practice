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

void inOrder(TreeNode* root, vector<vector<int>>&v)
{
    if(root==nullptr) return;

    inOrder(root->left,v);
    v[0].push_back(root->data);
    inOrder(root->right,v);
    return;
}

void preOrder(TreeNode* root, vector<vector<int>>&v)
{
    if(root==nullptr) return;
    
    v[1].push_back(root->data);
    preOrder(root->left, v);
    preOrder(root->right, v);
    return;
}

void postOrder(TreeNode* root, vector<vector<int>>&v)
{
    if(root==nullptr) return;
    
    postOrder(root->left, v);
    postOrder(root->right, v);
    v[2].push_back(root->data);
    return;
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>>v(3);

    inOrder(root,v);
    preOrder(root,v);
    postOrder(root,v);

    return v;
}