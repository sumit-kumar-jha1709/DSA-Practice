vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>>v;


    if(root==nullptr) return v;

    vector<int> posOrder, inOrder, preOrder;
    stack<pair<TreeNode*, int>>st;

    st.push({root, 1});

    while(!st.empty())
    {
        auto it=st.top();
        st.pop();

        if(it.second==1)
        {
            preOrder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left)
              st.push({it.first->left, 1});
        }
        else if(it.second==2)
        {
            inOrder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right)
              st.push({it.first->right, 1});
        }
        else{
            posOrder.push_back(it.first->data);

        }

    }
        v.push_back(inOrder);
        v.push_back(preOrder);
        v.push_back(posOrder);

    return v;
}