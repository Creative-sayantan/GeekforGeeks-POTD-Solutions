class Solution{
public: 
 string addBinary(string A, string B)
 {
      string res;

        int i = A.length() - 1;

        int j = B.length() - 1;

        int carry = 0;

        while(i >= 0 || j >= 0){

            int sum = carry;

            if(i >= 0) sum += A[i--] - '0';

            if(j >= 0) sum += B[j--] - '0';

            carry = sum > 1 ? 1 : 0;

            res += to_string(sum % 2);

        }

        if(carry) res += to_string(carry);

        reverse(res.begin(), res.end());

        i = 0;

     while(res[i] == '0')

     {

         res.erase(0, 1);

     }

  

        return res;
 }
};