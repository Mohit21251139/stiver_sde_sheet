class Solution {
public:
    int sol(vector<int>& nums,int ind,vector<int>& dp){
        if (ind == 0)return nums[ind];
        if (ind <0)return 0;
       if (dp[ind] != -1)return dp[ind];
        int pick = nums[ind] + sol(nums,ind-2,dp);
        int notpick = 0 + sol(nums,ind -1,dp);
        dp[ind]=  max(pick,notpick);
        return dp[ind];
    }
    int rob(vector<int>& nums) {
        // WRITE A RECURSION one 
        int n = nums.size();
        vector<int> dp(n,-1);
         return sol(nums,n-1,dp);
        //HERE IS DP- TABULATION
//         int n= nums.size();
//           int prev = nums[0];
//    int prev2 = 0;
//    for (int i = 1;i<n;i++){
//        int take = nums[i] ;
//        if (i >1) take += prev2;
//        int nottake = prev + 0;

//        int curri = max(take,nottake);

//        prev2= prev;
//        prev = curri;
//    }
//    return prev;
    }
};