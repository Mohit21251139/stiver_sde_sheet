class Solution {
public:
   
    vector<int> maxSubsequence(vector<int>& nums, int k) {
                vector<int> ans = nums;

        sort(ans.rbegin(),ans.rend());
        unordered_map<int,int > mpp;
        for (int i= 0;i<k;i++){
            mpp[ans[i]]++;
        }
        ans.clear();
        for (auto& it: nums){
            if (mpp.find(it) != mpp.end() && mpp[it]-->0){
                ans.push_back(it);
            }
        }
        return ans;

    }
};