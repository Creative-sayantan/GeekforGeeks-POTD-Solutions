class Solution{   
public:
    int numberOfSubsequences(string S, string W){
      int ans=0;
        for(int i=0;i<S.size();i++){
            int k=0,cnt=0;
            for(int j=i;j<S.size();j++){
                if(S[j]==W[k]){
                   S[j]='*';
                    cnt++;
                    k++;
                }
                if(cnt==W.size()){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};