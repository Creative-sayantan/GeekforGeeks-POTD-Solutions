class Solution {
  public:
    bool canPair(vector<int> nums, int k) {

        if(nums.size()&1)

            return false;

        unordered_map<int,int> freq;

        for(auto x: nums)

            freq[x%k]++;

        for(int i=1;i<k;i++)

            if((i==k-i && freq[i]&1) || (freq[i]!=freq[k-i]))

                return false;

        return true;

    }
};