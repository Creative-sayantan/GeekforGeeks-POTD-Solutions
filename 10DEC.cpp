string buildLowestNumber(string s, int k)
{          
  //code here.
     // change string num to string s 
     // in buildLowestNumber func
    string ans;
     vector<int> d(s.size());
     stack<int> st;
        for(int i=s.size()-1;i>=0;i--){
         while(st.size() and s[st.top()] >= s[i]) st.pop();
           if(st.size()) d[i] = st.top();
            else d[i] = -1;
              st.push(i);
    }
      for(int i=0;i<s.size();i++){
        if(d[i]-i > k or d[i] == -1) ans += s[i];
          else k--;
    }
       while(ans.size() and k--) ans.pop_back();
         int i=0;
        while(i < ans.size() and ans[i] == '0') i++;
          if(i == ans.size()) return "0";
       return ans.substr(i);
}