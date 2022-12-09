class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        string s,t;

         int ias=0,ibs=0,iat=0,ibt=0;

    if(M!=N)

    return 0;

    for(int i=0;i<M;i++){

        if(S[i]!='#')

        s.push_back(S[i]);

        if(S[i]=='A')

        ias = i;

        if(S[i]=='B')

        ibs = i;

    }

    for(int i=0;i<M;i++){

        if(T[i]!='#')

        t.push_back(T[i]);

        if(T[i]=='A')

        iat = i;

        if(T[i]=='B')

        ibt = i;

    }

    if(s==t){

        if(ias>=iat && ibs<=ibt)

        return 1;

        return 0;

    }

    else

    return 0;
    }
};