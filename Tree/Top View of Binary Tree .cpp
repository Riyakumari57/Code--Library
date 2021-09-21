/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            if(!mp[p.second])
            mp[p.second] = p.first->data;
            if(p.first->left)
            {
                q.push({p.first->left,p.second-1});
            }
             if(p.first->right)
            {
                q.push({p.first->right,p.second+1});
            }
        }
        
        vector<int>ans;
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }

};
