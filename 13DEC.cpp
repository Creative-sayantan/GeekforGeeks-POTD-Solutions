
class Solution 
{
  public:
    bool possible(int *arr,int k,int m,int n)
    {
        int block=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>m)return false;
            if(sum+arr[i]>m)
            {
                sum=arr[i];
                block++;
            }
            else
            {
                sum+=arr[i];
            }
        }
        if(sum<=m)block++;
        return block<=k;
    }
    int splitArray(int arr[] ,int n, int k) 
    {
        int low=0;
        int high=0;
        for(int i=0;i<n;i++)high+=arr[i];
        int ans=high;
        possible(arr,k,18,n);
        while(low<=high)
        {
            int m=low+(high-low)/2;
            if(possible(arr,k,m,n))
            {
                ans=min(ans,m);
                high=m-1;
            }
            else
            {
                low=m+1;
            }
        }
        return ans;
    }
};