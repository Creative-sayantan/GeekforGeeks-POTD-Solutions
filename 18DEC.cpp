class Solution {
  public:
   long long solve(int n){

        int count=3;

        long long ans = n;

        

        for(long long i=n-1;i>0;i--){

            if(count==0) break;

            if(__gcd(ans,i)==1){

            ans*=i;

            count--;

            }

        }

        return ans;

    }

    long long maxGcd(int n) {

        // code here

       return  max(solve(n),solve(n-1));

    }

 
};