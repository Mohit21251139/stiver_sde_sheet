class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxi = 0;
        int sum =0;
        vector<long long > prefix(n);
        prefix[n-1] = nums[n-1];
        for (int i = n-2;i>=0;i--){
            prefix[i] = prefix[i+1] + nums[i];
        }
   int ans =0;
        for (int i = n-1;i>=0;i--){
            
             if (prefix[i]> 0 ){
                ans ++;
             }

        }
        return ans;
    }
};