class Solution {
public:
      void foo(TreeNode* root, vector<int>&v)
    {
        if(root==NULL) return;
       
       foo(root->left,v);
        foo(root->right,v);
           v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int>v;
         foo(root,v);
          return v;
    }
};
