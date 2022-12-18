class Solution{   
public:
    int waysToBreakNumber(int N){
        long long mod=1e9+7,n=N;
        return ((n+2)*(n+1)/2)%mod;
    }
};