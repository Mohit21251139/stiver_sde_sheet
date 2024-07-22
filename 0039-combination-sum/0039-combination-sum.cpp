class Solution {
    private: 
    void sol(vector<int>& arr, int k,int sum ,vector<vector<int>>& ans,int i,vector<int> num){
        if (sum == k ){
            ans.push_back(num);
            return;
        }
        if (sum > k || i< 0){
            return;
        }
        //take it
        num.push_back(arr[i]);
        sol(arr,k,sum + arr[i],ans,i,num);

        //not take it
        num.pop_back ();
        sol(arr,k,sum,ans,i -1,num);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector<int>> ans;
        vector <int> num;
      sol(candidates,target,0,ans,candidates.size()-1 ,num);
        return ans;
    }
};