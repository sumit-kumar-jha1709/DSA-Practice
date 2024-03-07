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

vector<int> levelOrder(TreeNode<int> * root){
    vector<int> ans;
    
    if(root==nullptr) return ans;

    queue<TreeNode<int>*>q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode<int>*temp=q.front();
        q.pop();

        ans.push_back(temp->data);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }

    return ans;

}
