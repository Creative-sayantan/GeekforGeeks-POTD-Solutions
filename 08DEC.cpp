class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
   {   vector<int> ret;
       long long maxele=LONG_LONG_MIN;
       
       for(int j=0;j<q;j++){
           if(query[j]>maxele)
               maxele=query[j];
       }
       bool prime[(int)sqrt(maxele)+1];
       
       prime[0]=0;
       prime[1]=0;
       for(long long i=2;i<=sqrt(maxele);i++){
                   if(check_prime(i)){
                       prime[i]=true;
                   }else{
                       prime[i]=false;
                   }
       }
       for(int j=0;j<q;j++){
           int count=0;
          for(long long i=2;i<=sqrt(query[j]);i++){
                   if(prime[i])
                       count++;
           }
           ret.push_back(count);
       }
    
       return ret;
   }
   bool check_prime(int k){
       for(int i=2;i<=sqrt(k);i++){
           if(k%i==0)
               return false;
       }
       return true;
   }
};