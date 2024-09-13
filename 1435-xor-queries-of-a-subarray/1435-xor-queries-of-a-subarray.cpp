class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for (auto& it : queries){
            int first = it[0];
            int second = it[1];
            int var = 0;
            for (int i= first;i<=second;i++){
                var ^= arr[i];
            }
            ans.push_back(var);
        }
        return ans;
    }
};