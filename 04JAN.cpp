class Solution {
  public:
   int maximum_profit(int n, vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

 

        vector<int> dp(n, -1);

        dp[0] = intervals[0][2];

        for (int i = 1;i < n;i++)

        {

            dp[i] = intervals[i][2];

            int s = intervals[i][0];

            int max_val = 0;

            for (int j = 0;j < i;j++)

            {

                int e = intervals[j][1];

                if (s >= e)

                {

                    max_val = max(max_val, dp[j]);

                }

            }

            dp[i] += max_val;

        }

        return *max_element(dp.begin(), dp.end());

    }
};
