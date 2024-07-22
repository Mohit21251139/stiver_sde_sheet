class Solution {
public:
   void sol (vector<int>& num,int ind,vector <int> a,set<vector<int>>& ans ){
   if (ind<0){
    sort(a.begin(),a.end());
    ans.insert(a);
    return ; 
   }

   int val = num[ind];
   a.push_back(val);
   sol(num,ind-1,a,ans);
    a.pop_back();
   sol(num,ind -1,a,ans);
  
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set <vector<int>> ans;
        vector<int > num;
        vector <vector<int>> a;
        sol(nums,nums.size()-1,num,ans);
        for (auto& v:ans){
            a.push_back(v);
        }
        return a;
    }
};