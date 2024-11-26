class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        
        for (int i =0;i<n;i++){
             bool temp = false;
             for (int j = 0;j<n;j++){
                if (i == j)continue;
                if (grid[i][j] != 1){
                    temp = true;
                }

             }
             if (!temp)return i;
        }
        return -1;
    }
};