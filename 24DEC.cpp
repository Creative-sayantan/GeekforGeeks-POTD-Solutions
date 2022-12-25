class Solution{
public:
    long long int wineSelling(vector<int>& Arr, int N){
        //Code here.
        long long int ans = 0;
        int sell = 0;
        int buy = 0;
        
        while(buy < N && Arr[buy] <= 0)
            ++buy;
            
        while(sell < N && Arr[sell] >= 0)
            ++sell;
            
        while(buy < N && sell < N)
        {
            int buyy = Arr[buy];
            int selll = abs(Arr[sell]);
            
            Arr[buy] -= min(buyy, selll);
            Arr[sell] += min(buyy, selll);
            ans += min(buyy, selll)*abs(buy-sell);
            
            while(buy < N && Arr[buy] <= 0)
                ++buy;
                
            while(sell < N && Arr[sell] >= 0)
                ++sell;
        }
        
        return ans;
    }
};