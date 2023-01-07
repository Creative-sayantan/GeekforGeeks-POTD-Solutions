class Solution {
public:
     Node* merge(Node* a, Node* b){
        Node* dummy= new Node(-1);
        Node* curr=dummy;
        while(a && b){
            if(a->data<=b->data){
                curr->bottom= new Node(a->data);
                curr=curr->bottom;
                a=a->bottom;
            }
            else{
                curr->bottom= new Node(b->data);
                curr=curr->bottom;
                b=b->bottom;
            }
        }
        if(a) curr->bottom=a;
        if(b) curr->bottom=b;
        
        return dummy->bottom;
    }
    Node *flatten(Node *root)
    {
        // Your code here
        if(!root->next) return root;
        Node* ans= merge(root, flatten(root->next));
        return ans;
    }
};
