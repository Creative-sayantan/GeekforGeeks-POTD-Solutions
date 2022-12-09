class Solution 
{
    public:
    
    bool isCellValid(vector<vector<int>> &grid, int i, int j){
       if(i>=0 and i<grid.size() and j>=0 and j<grid[0].size() and grid[i][j] == INT_MAX)
        return true;
       return false;
    }
    //Function to find distance of nearest 1 in the grid for each cell.
  vector<vector<int>>nearest(vector<vector<int>>grid)
  {
      queue<pair<int,int>>q;
     for(int i = 0;i<grid.size();i++){
         for(int j =  0; j<grid[0].size();j++){
             if(grid[i][j] == 1){
                 q.push({i,j});
                 grid[i][j] = 0;
             }
             else{
             grid[i][j] = INT_MAX;
           }
         }
     }
     
     while(!q.empty()){
         int x = q.front().first;
         int y = q.front().second;
         q.pop();
         int dx[] = {1,-1,0,0};
         int dy[] = {0,0,-1,1};
         
         for(int k = 0;k<4;k++){
             int nx = x+dx[k];
             int ny = y+dy[k];
             
             if(isCellValid(grid,nx,ny)){
                 q.push({nx,ny});
                 grid[nx][ny] = grid[x][y]+1;
             }
         }
     }
     return grid;
  }
};