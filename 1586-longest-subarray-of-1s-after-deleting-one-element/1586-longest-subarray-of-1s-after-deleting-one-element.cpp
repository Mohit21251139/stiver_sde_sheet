class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0;
        int l = 0,r = 0;
        int n = nums.size();
        int cnt0 = 0;
        while(r<n){
            if (nums[r] == 0){
                cnt0++;
            }
            while(l<r && cnt0>1){
                if(nums[l] == 0){
                    cnt0--;
                }
                l++;
            }
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi-1;
    }
};