class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans(arr.begin(),arr.end());
        sort(ans.begin(),ans.end());
        unordered_map<int,int>mpp;
        int cnt = 1;
        for (int it: ans){
            if(mpp.find(it) != mpp.end()){
                continue;
            }

            mpp[it] = cnt;
            cnt++;

        }
        for (int i = 0;i<arr.size();i++){
            int val = mpp[arr[i]];
            arr[i] = val;
        }
        return arr;
    }
};