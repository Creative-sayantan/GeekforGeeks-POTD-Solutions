class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {

        // code here

        priority_queue<pair<int ,int>> Max;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Min;

        int left = 0, right = 0;

        int ans = 0;

        

        while(right < N)

        {

            

            //push element into queue

            Min.push({arr[right], right});

            Max.push({arr[right], right});

            

              // check if left - right > 1

            while(left < right and Max.top().first - Min.top().first > 1){

                left++;

                 // check if min or max is out of window

                while(Max.top().second < left) Max.pop();

                while(Min.top().second < left) Min.pop();

            }

           

            

            ans = max(ans, right - left + 1);

            right++;

        }

        

        return ans;

        

    }
};