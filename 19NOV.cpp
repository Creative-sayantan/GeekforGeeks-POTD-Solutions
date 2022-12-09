class Solution{
    public:
    void levelOrdertraversal(Node * root,vector<vector<int>> &ans){
         if(root==NULL)return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            for(int i =0;i<n;i++){
                Node *node = q.front();q.pop();
                if(node->left  != NULL)q.push(node->left);
                if(node->right != NULL)q.push(node->right);
                temp.push_back(node->data);
            }
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            
        }
    }
    bool areAnagrams(Node *root1, Node *root2)
    {
    vector<vector<int>> ans1;
    vector<vector<int>> ans2;
    levelOrdertraversal(root1,ans1);
    levelOrdertraversal(root2,ans2);
    
    if(ans1.size()!=ans2.size())return false;
    
    for(int i =0;i<ans1.size();i++)if(ans1[i]!=ans2[i])return false;
    return true;
    }
};