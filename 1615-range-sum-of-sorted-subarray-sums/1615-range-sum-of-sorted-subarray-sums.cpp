class Solution {
public:
int mod = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        for (int i = 0;i<n;i++){
            int sum = 0;
            for (int j = i;j<n;j++){
                sum += nums[j];
               ans.push_back(sum);

            }
        }
        long long  res = 0;
        sort(ans.begin(),ans.end());
        for (int i= left -1;i<right;i++){
            res= res+ans[i];
        }
        return res%mod ;
    }
};