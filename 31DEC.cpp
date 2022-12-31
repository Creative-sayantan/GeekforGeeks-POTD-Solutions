class Solution {

  public:

    int minLaptops(int N, int start[], int end[]) {

        // code here

        vector<pair<int,int>>v;

        for(int i=0;i<N;i++)

        {

            v.push_back({start[i],1});

            v.push_back({end[i],-1});

        }

        sort(v.begin(),v.end());

        int ans=0;

        int cnt=0;

        for(int i=0;i<v.size();i++)

        {

            cnt+=v[i].second;

            ans=max(ans,cnt);

        }

        return ans;

    }

};

