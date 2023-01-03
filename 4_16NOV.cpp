class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int res = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            vector<int> dp(26);
            for (int j = i; j < n; j++) {
                dp[s[j] - 'a']++;
                int a = 0, b = n;
                for (int k = 0; k < 26; k++) {
                    if (dp[k] > 0) {
                        a = max(a, dp[k]);
                        b = min(b, dp[k]);
                    }
                }
                res += a - b;
            }
        }
        return res;
    }
};
