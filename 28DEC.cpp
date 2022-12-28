class Solution {
private:
    int subtreeSum(Node* root, int &maxSum) {
        if(!root)
            return 0;
            
        int leftSum = subtreeSum(root->left, maxSum);
        int rightSum = subtreeSum(root->right, maxSum);
        int sum = root->data + leftSum + rightSum;
        
        maxSum = max(maxSum, sum);
        
        return sum;
    }

public:
    int findLargestSubtreeSum(Node* root)
    {
        int maxSum = -1e9;
        subtreeSum(root, maxSum);
        return maxSum;
    }
};