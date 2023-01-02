class Solution {
  public:
    vector<int> maximumValue(Node* node) {

        //code here

        queue<Node*> pq;

        pq.push(node);

        vector<int> ans;

        int k = 1, next = 0, Max = INT_MIN;

        while(!pq.empty()){

            if(k == 0){

                k = next;

                next = 0;

                ans.push_back(Max);

                Max = INT_MIN;

            }

            Node* Front = pq.front();

            pq.pop();

            Max = max<long>(Max, Front -> data);

            k--;

            if(Front -> left != NULL){

                pq.push(Front -> left);

                next++;

            }

            

            if(Front -> right != NULL){

                pq.push(Front -> right);

                next++;

            }

        }

         if(Max >= 0) ans.push_back(Max);

        return ans;

    }
};
