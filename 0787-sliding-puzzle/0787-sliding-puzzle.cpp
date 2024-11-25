class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        vector<vector<int>> dir = {{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
        string target = "123450";
        set<string>vis;
        queue<string>q;
        string start = "";
         for (int i =0;i<board.size();i++){
            for (int j = 0;j<board[0].size();j++){
                start += to_string(board[i][j]);
            }
         }
         q.push(start);
         vis.insert(start);
         int move =0;
         while(!q.empty()){
            int n = q.size();
            while(n--){
                string temp = q.front();
                q.pop();
                if (temp == target)return move;

                int zero = temp.find('0');
                for (auto it: dir[zero]){
                    string next = temp;
                    swap(next[it],next[zero]);
                    if (!vis.count(next)){
                        vis.insert(next);
                        q.push(next);
                    }
                }

            }
            move++;
         }
         return -1;
    }
};