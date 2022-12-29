class Solution {
  public:
     vector<int> asteroidCollision(int N, vector<int> &asteroids) {

        stack<int>st;

        vector<int>ans;

        for(int i=0;i<N;i++)

        {

            int curr=asteroids[i];

            if(curr>0)

            {

                st.push(curr);

            }

                // jab Negative Asteroid aata he tab.

            else

            {

                while(st.size()>0 && st.top()<-curr)

                {

                    st.pop();// current  vala Element bada ho

                }

                if(st.size()>0 && st.top()==-curr)

                {

                    st.pop();// current vala element eqaul ho

                }

                else if(st.size()>0 && st.top()>-curr){

                    //current Elemnt chhota ho

                }

                else

                {

                    ans.push_back(curr);

                }

            }

        }

        

        vector<int> res;

        

        while(!st.empty())

        {

            res.push_back(st.top());

            st.pop();

            

        }

        reverse(res.begin(), res.end());

        for(int i=0;i<res.size();i++)

        {

            ans.push_back(res[i]);

        }

        return ans;

    }
};