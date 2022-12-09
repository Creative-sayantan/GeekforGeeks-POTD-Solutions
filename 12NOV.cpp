class Solution {
 public:
  int characterReplacement(string s, int k) {
       int maxLen = 0;
       int cnt = 0;
       int i = 0; 
       int j = 0;
       unordered_set<char> st;
       for(auto &e: s){
           st.insert(e);
       }
       for(auto &e : st){
           int currLen = 0;
           int cnt = 0;
           int i = 0;
           int j = 0;
       while(j < s.size()){
           if(s[j] == e){
               currLen++;
               maxLen = std::max(currLen, maxLen);
               j++;
           }
           else{
               cnt++;
               currLen++;
               while(cnt > k && i <= j){
                   if(e != s[i])
                   cnt--;
                   i++;
                   currLen--;
               }
               maxLen = std::max(currLen, maxLen);
               j++;
           }
       }
       }
       return maxLen;
   }

};