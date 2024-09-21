class Solution {
public:
    vector<int> ans;
  void sol (int curr,int n ){
    if (curr > n ){
        return ;
    }
    ans.push_back(curr);
    for (int i = 0;i<10;i++){
        sol(curr* 10 +i,n);
    }
  }
    vector<int> lexicalOrder(int n) {
        for (int i = 1;i<10;i++){
            sol(i,n);
        }
         
         return ans;
    }
};