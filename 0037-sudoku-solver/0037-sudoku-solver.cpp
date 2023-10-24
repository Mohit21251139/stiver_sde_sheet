class Solution {
public:
   bool issafe(int x,int y,vector<vector<char>>& board,char val){
     for (int i = 0;i<9;i++){
         //row check
         if (board[x][i] == val){
             return false;

         }
         //col check
         if (board[i][y] == val){
             return false;
             
         }
         //3*3 matrix
         if (board[3*(x/3) + i/3][3*(y/3) + i%3] == val){
             return false;
         }
     }
     return true;
 }
 bool solve(vector<vector<char>>& board){
    // int n = board[0].size();
     for (int i = 0;i<board[0].size();i++){
         for (int j = 0;j< board[0].size();j++){
            
            //cell empty
             if (board[i][j] == '.'){

                 for (char val = '1';val<='9';val++){
                     
                      if (issafe(i,j,board,val)){

                          board[i][j] = val;

                      
                       //recursive call
                       bool nextsolution = solve (board);
                       if (nextsolution){
                           return true;
                       }

                       else {
                         // backtrack
                         board[i][j] = '.';
                       }
                    }
                 }
                 return false;
             }

         }
     }
     return true;

    
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};