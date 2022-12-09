long long numOfWays(int N, int M)
{
    long long int mod = 1e9+7 ;
    long long int ans = 0 ;
    long long int a1 = 1 , a2 = 2 , a4 =4;
    ans+=(long long)(((N*M) -a1)*(N*M)) ;
    if(N >=2 && M>=3){
        ans-=(long long)((N-a1)*(a4)*(M-a2)) ;
    }
    if(N >=3 && M>=2){
        ans-= (long long)((N-a2)*(a4)*(M-a1)) ;
    }
    return (ans%mod) ;
}