class Solution{
    public:
    void SortingHelper(vector<char>&v)
    {
        int count[26]={0};
        for(int i=0;i<(int)v.size();i++)
        {
            count[v[i]-'a']++;
        }
        v.clear();
        for(int i=0;i<26;i++)
        {
            while(count[i])
            {
                v.push_back('a'+i);
                count[i]--;
            }
        }
    }
    string rearrange (string s, int N)
    {
        vector<char>vowel,con;
        unordered_set<char>dict={'a','e','i','o','u'};
        for(int i=0;i<s.length();i++)
        {
            if(dict.find(s[i])!=dict.end())
            {
                vowel.push_back(s[i]);
            }
            else
            {
                con.push_back(s[i]);
            }
        }
        if(abs((int)vowel.size()-(int)con.size())>1)
        {
            return "-1";
        }
        SortingHelper(vowel);
        SortingHelper(con);
        string ans="";
        if((int)vowel.size()>(int)con.size())
        {
            int i=0,j=0;
            while(i<vowel.size() && j<con.size())
            {
                if(i<vowel.size())ans.push_back(vowel[i++]);
                if(j<con.size())ans.push_back(con[j++]);
            }
            while(i<vowel.size())
            {
                ans.push_back(vowel[i++]);
}
            while(j<con.size())
            {
                ans.push_back(con[j++]);
            }
        }
        else if((int)vowel.size()==(int)con.size())
        {
            if(vowel[0]<con[0])
            {
                int i=0,j=0;
                while(i<vowel.size() && j<con.size())
                {
                    if(i<vowel.size())ans.push_back(vowel[i++]);
                    if(j<con.size())ans.push_back(con[j++]);
                }
                while(i<vowel.size())
                {
                    ans.push_back(vowel[i++]);
                }
                while(j<con.size())
                {
                    ans.push_back(con[j++]);
                }    
            }
            else
            {
                int i=0,j=0;
                while(i<vowel.size() && j<con.size())
                {
                    if(j<con.size())ans.push_back(con[j++]);
                    if(i<vowel.size())ans.push_back(vowel[i++]);
                }
                while(i<vowel.size())
                {
                    ans.push_back(vowel[i++]);
                }
                while(j<con.size())
                {
                    ans.push_back(con[j++]);
                }
            }
        }
        else
        {
            int i=0,j=0;
            while(i<vowel.size() && j<con.size())
            {
                if(j<con.size())ans.push_back(con[j++]);
                if(i<vowel.size())ans.push_back(vowel[i++]);
            }
            while(i<vowel.size())
            {
                ans.push_back(vowel[i++]);
            }
            while(j<con.size())
            {
                ans.push_back(con[j++]);
            }
        }
        return ans;
}
};