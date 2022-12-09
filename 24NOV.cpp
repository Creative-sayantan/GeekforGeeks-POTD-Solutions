class Solution{
 public:
 int LongestBitonicSequence(vector<int>nums)

 {

     // code here

     int n=nums.size();

     vector<int>lis(n);

     for(int i=0;i<n;i++)

     {

         lis[i]=1;

         for(int j=0;j<i;j++)

         {

             if(nums[j]<nums[i])

             {

                 lis[i]=max(lis[i],lis[j]+1);

             }

         }

     }

     vector<int>lds(n);

     reverse(nums.begin(),nums.end());

     for(int i=0;i<n;i++)

     {

         lds[i]=1;

         for(int j=0;j<i;j++)

         {

             if(nums[j]<nums[i])

             {

                 lds[i]=max(lds[i],lds[j]+1);

             }

         }

     }

     reverse(lds.begin(),lds.end());

     vector<int>diff(n);

     for(int i=0;i<n;i++)

     {

         diff[i]=lis[i]+lds[i]-1;

     }

     return *max_element(diff.begin(),diff.end());

 }
};