class Solution {
  public:
   int solve(int n, vector<int> a) {

        // code here

        int ans=0;

        for(int i=n-1;i>=0;i--)

        {

            if(a[i]+1!=10)

            {

                ans=i+1;

                break;

            }

        }

        return ans;

    }
};
