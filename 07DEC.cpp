class Solution {
   int count = 0 ; 
    int ans =  INT_MIN ; 
    
  public:
  
  void inorder(Node * root , int k)
    {
        if(root == NULL)
            return ; 
    
        // TRAVERSING IN THE LEFT
        inorder(root -> left , k ) ;
    
        // INCREMENT OF COUNT
        count++ ; 
    
        // IF THE COUNT IS EUAL TO K 
        if(count == k)
        {
            ans = root -> data ;
            return ; 
        }
    
        // TRAVERSING IN THE RIGHT
        inorder(root -> right , k ) ; 
    }
    
    
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        
        inorder(root , K) ; 
        
        if(ans == INT_MIN)
            return -1 ;
            
        return ans ; 
    }
};