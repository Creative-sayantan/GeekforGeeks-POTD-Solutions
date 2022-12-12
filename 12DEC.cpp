class Solution {
  public:
  
    void dfs(int node, int parent, int& timer, vector<int> adj[], vector<int>& vis, vector<int>& tin, vector<int>& low, vector<int>& isarti){
        
        
        vis[node] = 1;
        tin[node] = low[node] = timer++;
        
        int child = 0;
        
        for(auto &it : adj[node]){
            
            if(it == parent) continue;
            
            if(!vis[it]){
                
                dfs(it, node, timer, adj, vis, tin, low, isarti);
                low[node] = min(low[node], low[it]);
                
                if(low[it] >= tin[node] && parent != -1){
                    
                    isarti[node] = 1;
                }
                child++;
            }
            else{
                
                low[node] = min(low[node], tin[it]);
            }
        }
        
        if(parent == -1 && child > 1)
            isarti[node] = 1;
        
    }
    
    
    
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        
        vector<int> res;
        vector<int> vis(V, 0);
        vector<int> tin(V, -1);
        vector<int> low(V, -1);
        vector<int> isarti(V, 0);
        
        int timer = 0;
        
        for(int i = 0; i < V; i++){
            
            if(!vis[i]){
                
                dfs(i, -1, timer, adj, vis, tin, low, isarti);
            }
        }
        
        for(int i = 0; i < V; i++){
            
            if(isarti[i]) res.push_back(i);
        }
        
        if(res.size() == 0) res.push_back(-1);
        
        return res;
        
    }
};