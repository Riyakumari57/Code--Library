class Solution {
public:
    int foo(TreeNode* root,int& f)
    {
         if(root==NULL)
        {
            return 0;
        }
        
        int lh = foo(root->left,f);
         int rh = foo(root->right,f);
        if(abs(lh-rh)>1) f=0;
        
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) 
    {
        int f = 1;
       foo(root,f);
        return f;
    }
};
