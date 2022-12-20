class Solution{
  public:
    int maxDistance(int arr[], int n) {
        int ans = 0, mn1 = arr[0], mn2 = -arr[0];
        for(int i = 0; i < n; i++) {
            mn1 = min(mn1,  arr[i] + i);
            mn2 = min(mn2, -arr[i] + i);
            ans = max(ans,  arr[i] + i - mn1);
            ans = max(ans, -arr[i] + i - mn2);
        }
        return ans;
    }
};