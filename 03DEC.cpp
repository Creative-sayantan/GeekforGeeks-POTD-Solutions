> Sanyam Jain:
class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
           sort(stalls.begin(),stalls.end());

 

        int l=0,r=stalls[n-1]-stalls[0];

 

        int ans=0;

 

        while(l<=r){

 

            int mid=(l+r)/2;

 

            int cow=1;

 

            int last=stalls[0];

 

            for(int i=1;i<n;i++){

 

                if(stalls[i]-last>=mid){

 

                    cow++;

 

                    last=stalls[i];

 

                }

 

            }

 

            if(cow>=k){

 

                ans=mid;

 

                l=mid+1;

 

            }

 

            else{

 

                r=mid-1;

 

            }

 

        }

 

        return ans;
    }
};
