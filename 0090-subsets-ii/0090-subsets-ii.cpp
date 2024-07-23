class Solution {
public:

   void sol (vector<int>& num,int ind,vector <int> a,vector<vector<int>>& ans ){

  ans.push_back(a);
  for (int i = ind;i<num.size();i++){
    if (i > ind && num[i] == num[i-1 ])continue;
    a.push_back(num[i]);
    sol(num,i+1,a,ans);
    a.pop_back();
  }
   
  
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<int > num;
                vector <vector<int>> ans;

        sort(nums.begin (),nums.end());
        sol(nums,0,num,ans);
    
        return ans;
    }
};