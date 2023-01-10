class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
   int sum(Node* root){

        if(root==NULL)

            return 0;

        return root->data + sum(root->left) + sum(root->right);

    }

    void toSumTree(Node *node)

    {

        // Your code here

        if(node==NULL)

            return ;

        if(node->left==NULL && node->right==NULL){

            node->data=0;

            return ;

        }

        node->data = sum(node->left) + sum(node->right);

        if(node->left)

            toSumTree(node->left);        

        if(node->right)

            toSumTree(node->right);

    }
};
