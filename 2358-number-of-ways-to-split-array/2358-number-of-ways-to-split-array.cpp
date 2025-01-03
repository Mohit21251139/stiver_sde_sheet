class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        // long long  sum = accumulate(nums.begin(),nums.end(),0ll);
        long long sum =0;
        for (int i =0;i< nums.size();i++){
            sum += nums[i];
        }
        long long  curr = 0;
        int   ans =0;
        for (int i =0;i< nums.size() -1;i++){
            curr += nums[i];
            ans += (curr >= sum - curr );
        }
       return ans;
    }
};