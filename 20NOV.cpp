class Solution {
  public:
    long long lcmTriplets(long long N) {
        if(N < 3) return N;
        else if(N % 2!=0) return (N*(N-1)*(N-2));
        else if(N%2==0 && N % 3!=0) return (N*(N-1)*(N-3));
        else if(N%2==0 && N%3==0) return ((N-1)*(N-2)*(N-3));
    }
};