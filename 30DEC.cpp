class Solution
{
    public:
    int cnt=0;
    pair<bool,int> check(Node* root){
        if(!root){
            return {true,INT_MAX};
        }
        pair<bool,int>left=check(root->left);
        pair<bool,int>right=check(root->right);
        
        if(left.first && right.first){
            if((root->data==left.second ||  left.second==INT_MAX) && (root->data==right.second || right.second==INT_MAX)){
                 cnt++;
                 return {true,root->data};
            }
        }
        return {false,root->data};
    }
    int singlevalued(Node *root)
    {
        //code here
        pair<bool,int>temp=check(root);
        return cnt;
    }
};