class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid[0].size();
        int n = grid.size();
        queue<pair<pair<int,int>, int>> q;
        int vis[n][m];
        for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                if (grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                else{
                    vis[i][j] = 0;
                }
            }
        }

         int tm = 0;
         int drow[] = {-1,0,+1,0};
         int dcol[] = {0,+1,0,-1};
         while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();
            for ( int i = 0;i< 4 ;i++){
                int rrow = row + drow[i];
                int ccol = col + dcol[i];

                 if (rrow >= 0 && rrow < n && ccol >= 0 && ccol < m && vis[rrow][ccol]== 0 && grid[rrow][ccol] == 1){
                  q.push({{rrow,ccol},t + 1});
                  vis[rrow][ccol] = 2;
            }

            }
           
         }
         for (int i = 0;i< n;i++){
            for (int j = 0;j< m;j++){
                if (grid[i][j] == 1 && vis[i][j] != 2){
                    return -1;
                } 
            }
         }
          return tm;
    }
};