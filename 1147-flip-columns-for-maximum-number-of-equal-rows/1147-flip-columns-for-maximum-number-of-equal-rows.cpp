class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string,int> mpp;
        for (auto& row: matrix){
            string num;
            if (row[0] == 0){
                for (int bit: row)num += to_string(bit);

            }
            else{
                for (int bit: row)num+= to_string(bit ^1);
            }
            mpp[num] ++;
        }
        int ans = 0;
        for (const auto& it: mpp){
            ans = max(ans , it.second);
        }
        return ans;
    }
};