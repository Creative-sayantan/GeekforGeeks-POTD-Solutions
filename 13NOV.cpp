class Solution{
public:
    int totalWays(int n, vector<int>capacity) {

        sort(capacity.begin(), capacity.end());

        long long N = 1e9 + 7;

        long long ans = 1;

        for(int i = 0; i < n; i++){

            ans *= capacity[i] - i;

            ans %= N;

        }

        return ans;

    }
};