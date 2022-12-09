class Solution{
 public:
 int countTriplets(vector<int>arr){

     // Code here.

     int s=0, e=0, i=0, j=0, p=0, q=0;

     int ans=0;

     int n =arr.size();

     for(i=1;i<n-1;i++){

         s=0,e=i+1;

         p=0,q=0;

         for(j=0;j<i;j++){

             if(arr[i]>arr[j]){

                 p++;

             }

         }

          for(j=i+1;j<n;j++){

             if(arr[i]<arr[j]){

                 q++;

             }

         }

         ans+=p*q;

     }

     return ans;

 }
};