class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans (n-k+1,-1);
       int len = 1;
       for (int r = 1;r<k;r++){
        if (nums[r] == nums [r-1] +1)len ++;
        else len = 1;
       }
       if (len == k)ans[0]= nums[k-1];
       for (int l = 1,r= k;r<n;r++,l++){
        if (nums[r] == nums[r-1] +1 )len ++;
        else len = 1;
        if (len >=k) ans[l] = nums[r];
       }
       return ans;
    }
};