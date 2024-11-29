class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int dx[] = {-1,0,+1,0};
        int dy[] = {0,+1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        if (grid[0][1] >1 && grid[1][0] >1)return -1 ;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair <int ,pair<int,int>>>>pq;
        pq.push({grid[0][0], {0,0}});
        vis[0][0] =1 ;
        while (!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int time = it.first;
            int x = it.second.first;
            int y = it.second.second;
            if (x ==n-1 && y == m-1)return time;
            for (int i = 0;i<4;i++){
                int r = x + dx[i];
                int c = y+ dy[i];
                if (r >= 0 &&  r<n &&  c >= 0 && c< m && !vis[r][c]){
  int currtime = ((grid[r][c] - time) % 2== 0)? 1: 0;
                   long long finaltime = max(grid[r][c]+currtime,time +1);
                    pq.push({finaltime,{r,c}});
                    vis[r][c] = 1;
                }
                 
            }
        }
        return -1;

    }
};