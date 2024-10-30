class Solution {
public:
    int sol(int i ,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        int n = grid.size();
        int m = grid[0].size();
        
        if (i >= n || j >= m)return 0;
        if (dp[i][j] != -1 )return dp[i][j];
        int maxi = 0;
       if (i-1 >= 0 && j+1 < m && grid[i-1][j+1] > grid[i][j]){
        maxi =max(maxi,1+sol(i-1,j+1,grid,dp));
       }
        if ( j+1 < m && grid[i][j+1] > grid[i][j]){
        maxi = max(maxi,1+sol(i,j+1,grid,dp));
       }
        if ( i+1<n && j+1 < m && grid[i+1][j+1] > grid[i][j]){
        maxi = max(maxi,1+sol(i+1,j+1,grid,dp));
       }
     return dp[i][j]= maxi;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        for (int i =0;i<n;i++){
            ans = max(ans,sol(i,0,grid,dp));
        }
        return ans;
    }
};