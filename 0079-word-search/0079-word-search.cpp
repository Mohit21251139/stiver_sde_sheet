class Solution {
public: 
    int dx[4] = {-1,0,+1,0};
    int dy[4] = {0,+1,0,-1};
    int r ;
    int c;
    bool sol(int row,int col,int num, vector<vector<char>> & board,string word,vector<vector<int>>& vis){
        if (num == word.size())return true;
        if (row <0 || row>= r || col< 0 || col>=c)return false;
        if (board[row][col] != word[num])return false;
        if (vis[row][col] == 1)return false;
        vis[row][col ]= 1;
        bool ans = false;
        for (int i =0;i< 4;i++){
        ans = ans || (sol(row + dx[i],col+ dy[i], num +1, board,word,vis));
        }
        vis[row][col] = -1;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        r = board.size();
        c = board[0].size();
        vector<vector<int>> vis(r,vector<int> (c,-1));
        for (int i =0;i<r;i++){
            for (int j = 0;j<c;j++){
                if (board[i][j] == word[0]){
                   if ( sol(i,j,0,board,word,vis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};