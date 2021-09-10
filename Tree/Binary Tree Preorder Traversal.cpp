class Solution {
public:
    void foo(TreeNode* root, vector<int>&v)
    {
        if(root==NULL) return;
        v.push_back(root->val);
       foo(root->left,v);
        foo(root->right,v);
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int>v;
         foo(root,v);
          return v;
    }
};
