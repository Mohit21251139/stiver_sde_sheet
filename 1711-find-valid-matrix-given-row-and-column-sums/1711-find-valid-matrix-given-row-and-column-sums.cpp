class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int c = colSum.size();
        vector <vector<int>>v(n,vector<int> (c,0));
        for ( int i = 0;i<n;i++){
            for ( int j = 0;j<c;j++){
                int x = min (rowSum[i],colSum[j]);
                v[i][j] = x;
                rowSum[i] -= x;
                colSum[j] -= x;
            }
        }
return v;
    }
};