class Solution {
  public:
     long long int maxSumLCM(int n) 

    {

        // code here

        long long int ans = 0;

        for(int i = 1; i <= sqrt(n); i++){

            if(n % i) continue;

            if(n/ i != i)

                ans += (n / i);

            ans += i;

            

        }

        return ans;

    }
};