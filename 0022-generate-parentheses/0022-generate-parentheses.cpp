class Solution {
public:
    void sol(string curr,int open,int close,int total,vector<string> &ans){
      if (curr.length() == 2* total){
        ans.push_back(curr);
        return ;
      }
      if (open < total){
        sol(curr+'(',open +1,close,total,ans);
      }
      if (close < open){
        sol(curr+')',open, close+1,total,ans);
      }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        sol ("",0,0,n,ans);
        return ans;
    }
};