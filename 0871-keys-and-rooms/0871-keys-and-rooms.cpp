class Solution {
    private:
    void dfs(int key,vector<vector<int>> & rooms,vector<bool>& ans){
       ans[key ] = true;
       for (auto& it: rooms[key]){
        if (!ans[it]){
            dfs(it,rooms,ans);
        }
       }

    }
public:

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
       vector<bool> ans(n,false);
       ans[0] = true;
       dfs(0,rooms,ans);
       for (auto  i: ans){
        if (!i)return false;
       }
       return true;
    }
};