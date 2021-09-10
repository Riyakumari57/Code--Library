class Solution {
public:
    int findd(TreeNode* root,int& maxx)
    {
        
        if(root==NULL) return 0;
        int lh = findd(root->left,maxx);
         int rh = findd(root->right,maxx);
        maxx = max(lh+rh,maxx);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        int maxx = 0;
        findd(root,maxx);
        return maxx;
    }
    
};
