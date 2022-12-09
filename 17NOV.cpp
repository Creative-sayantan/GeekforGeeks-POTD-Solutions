class Solution{
public:
 // #define ll long long

 ll countSubarray(int arr[], int n, int k) {
     // code here
      int l=-1, r=n;
        long long ans=0;
       
        for(int i=0; i<n; ++i) {
            if(arr[i] > k) {
                long long left = i-l;
                long long right = r-i;
                ans += left*right;
               
                l=i;
            }
        }
       
        return ans;
 }
};