class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({grid[0][0],{0,0}});
        vis[0][0] = 1;
        int dx[] = {-1,0,+1,0};
        int dy[] = {0,+1,0,-1};
        while (!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int step = it.first;
            int x = it.second.first;
            int y = it.second.second;
            if (x == n-1 && y == m-1){
                return step;
            }
            for (int i =0;i<4;i++){
                int r = x + dx[i];
                int c = y + dy[i];

                if (r >=0 && r < n && c >= 0 && c<m && !vis[r][c]){
                    pq.push({step + grid[r][c] , {r,c}});
                    vis[r][c] = 1;
                }
            }
        }
                    return  -1;

    }
};