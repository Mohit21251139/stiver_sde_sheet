class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mpp;
        int cnt =0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i =0;i<n;i++){
            mpp[grid[i]]++;
        }
        for (int j = 0;j< m;j++){
            vector<int> curr;
            for (int i = 0;i<n;i++){
                curr.push_back(grid[i][j]);
            }
            cnt += mpp[curr];
        }
        return cnt;
    }
};