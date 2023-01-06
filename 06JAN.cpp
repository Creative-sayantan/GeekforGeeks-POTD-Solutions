class Solution{   
  public:
   bool isPrime(int n) {
        if(n==0 or n==1) return false;
        
        for(int i=2;i<=sqrt(n);i++) {
            if(n%i == 0) return false;
        }
        
        return true;
    }
    int shortestPath(int n1,int n2) {
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        
        queue<pair<string,int>>q;
        q.push({s1, 0});
        vector<int> vis(1e5);
        
        while(!q.empty()) {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            
            vis[stoi(word)] = 1;
            
            if(word == s2) return steps;
            
            for(int i=0;i<word.size();i++) {
                char ch = word[i];
                
                for(int j=0;j<10;j++) {
                    if(i == 0 and j == 0) continue;
                    
                    word[i] = char(j + '0');
                    int val = stoi(word);
                    
                    if(isPrime(val) and !vis[val]){
                        vis[val] = 1;
                        q.push({word, steps+1});
                    } 
                
                    
                }
                
                word[i] = ch;
            }
        }
        
        return -1;
    }
};
