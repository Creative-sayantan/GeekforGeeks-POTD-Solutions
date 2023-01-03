class Solution {

  public:

    int removeStudents(int H[], int n) {

        

        vector<int>arr;

        for(int i=0;i<n;i++){

    

          int it=lower_bound(arr.begin(),arr.end(),H[i])-arr.begin();

          if(it==arr.size()){

              arr.push_back(H[i]);

          }

          else

            arr[it]=H[i];

        }

        return n-arr.size();

    }

};
