class Solution {
public:
   
void sol(int r ,int n, vector<vector<string>>& ans, vector<string>& board,vector<int> &col,  vector<int>& leftdig,  vector<int> &rightdig){
       //base condition
       if (r == n){
        ans.push_back(board);
        return ;
       }

       for (int c = 0;c < n ;c++){
        if (col[c] == 0 && leftdig[n-1+c-r] == 0 && rightdig[r+c]==0){
             col[c] = 1;
             board[r][c] = 'Q';
             leftdig[n-1+c-r] = 1;
             rightdig[r+c] = 1;
             sol(r+1,n,ans,board,col ,leftdig,rightdig);
             col[c ]= 0;
             board[r][c]= '.';
               leftdig[n-1+c-r] = 0;
             rightdig[r+c] = 0;
        }
       }

   }
    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n);
        for (int i= 0;i<n;i++)
        for (int j = 0;j< n;j++)
        board[i].push_back('.');
        vector<vector<string>> ans;
        vector<int> leftdig(2*n-1,0);
        vector<int> rightdig(2*n-1,0);
        vector<int> column(n,0);
        sol (0,n, ans ,board,column,leftdig,rightdig);
        return ans;
    }
};