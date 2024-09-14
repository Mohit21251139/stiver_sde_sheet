class Solution {
public:
   bool isafe (int n,int i,int j , vector<string>& board){
    int row = i,col = j;
    //left side
    while (row>-1 && col>-1 ){
        if (board[row][col] == 'Q' ){
            return 0;

        }
        row --,col --;
    }
    //right side
    row = i,col = j;
    while (row>-1 && col < n){
        if (board[row][col] == 'Q'){
            return 0;
        }
        row--,col ++;

    }
    return 1;
   }
void sol(int r ,int n, vector<vector<string>>& ans, vector<string>& board,vector<int> &col){
       //base condition
       if (r == n){
        ans.push_back(board);
        return ;
       }

       for (int c = 0;c < n ;c++){
        if (col[c] == 0 && isafe(n,r,c,board)){
             col[c] = 1;
             board[r][c] = 'Q';
             sol(r+1,n,ans,board,col );
             col[c ]= 0;
             board[r][c]= '.';
        }
       }

   }
    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n);
        for (int i= 0;i<n;i++)
        for (int j = 0;j< n;j++)
        board[i].push_back('.');
        vector<vector<string>> ans;
        vector<int> column(n,0);
        sol (0,n, ans ,board,column);
        return ans;
    }
};