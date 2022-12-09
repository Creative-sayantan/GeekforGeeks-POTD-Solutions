class Solution {
  public:
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        vector<vector<int>> lives(n, vector<int> (m, -1));
        queue<vector<int>> q;
        // q-> row, col, k, dist
        q.push({0, 0, k, 0});
        
        int dx[] = {-1, 0, 1, 0, -1}; 
        while(!q.empty()) {
            vector<int> temp = q.front();
            q.pop();
            
            int row = temp[0];
            int col = temp[1];
            int clives = temp[2];
            int dist = temp[3];
            
            if(row == n-1 && col == m-1) return dist;
            
            if(mat[row][col] == 1) clives--;
            
            for(int i=0; i<4; i++) {
                int nrow = row + dx[i];
                int ncol = col + dx[i+1];
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && lives[nrow][ncol] < clives) {
                    q.push({nrow, ncol, clives, dist+1});
                    lives[nrow][ncol] = clives;
                }
            }
        }
        return -1;
    }
};