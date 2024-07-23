class Solution {
public:
   void sol(vector<int>& arr,int ind ,int k,vector<int> a, vector<vector<int>> &ans){
    if (k== 0){
      
        ans.push_back(a);
        return;
    }
    for (int i= ind;i<arr.size();i++){
        if (i>ind && arr[i] == arr[i-1])continue;
        if (arr[i] > k){
            break;
        }
        a.push_back(arr[i]);
        sol(arr,i +1,k-arr[i],a,ans);
        a.pop_back();
    }

   
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector<int>> ans;
        
        vector<int> a;
        sort(candidates.begin(),candidates.end());
        sol(candidates,0,target,a,ans);
        return ans;
    }
};