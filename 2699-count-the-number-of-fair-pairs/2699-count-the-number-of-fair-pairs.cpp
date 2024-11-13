class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
       sort(nums.begin (),nums.end());
       long long ans = 0;
       for (int i =0;i<nums.size();i++){
        int a = upper -nums[i];
        int b = lower - nums[i];
        int x = lower_bound(nums.begin(),nums.end(),b) - nums.begin();
        int y = upper_bound(nums.begin(),nums.end(),a) - nums.begin();
        if (y<= i)continue;
         x = max(x,i+1);
         ans += (y-x);
       }
       return ans;
    }
};