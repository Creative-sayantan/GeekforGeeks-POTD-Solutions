class Solution
{
public:
  string longestString(vector<string> &words)

{

string ans; // to store the longest lexicographically smallest string

set<string> s; // to store all the strings in the array

for(int i=0;i<words.size();i++)

{

s.insert(words[i]);

}

sort(words.begin(),words.end()); // sorting the array

for(int i=0;i<words.size();i++)

{

string str=words[i];

string temp="";

bool flag=true;

for(int j=0;j<str.length();j++)

{

temp+=str[j];

if(s.find(temp)==s.end())

{

flag=false;

break;

}

}

if(flag && str.length()>ans.length())

{

ans=str;

}

}

return ans;

}
};
