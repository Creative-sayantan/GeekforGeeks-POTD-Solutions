class Solution {

  public:

    long long countPairs(int n, int arr[], int k) {

        vector<int> rem(k,0);

        sort(arr,arr+n);

        

        long long ans=0;

        

        for(int i=0;i<n;i++)

        {

            int ele=arr[i];

            int r=ele%k;

            

            ans+=rem[r];

            rem[r]++;

        }

        return ans;

    }

};
