class Solution {
public:
   const int MOD = 1e9+7;
     int sol(int low,int high, int zero,int one,int len,vector<int>& dp){
        if (len> high)return 0;
        if (dp[len] != -1)return dp[len];
        int ans  = (sol(low,high, zero,one,len + zero,dp )%MOD 
          + sol(low,high, zero,one,len + one,dp)%MOD) %MOD;
        if (len>= low && len <= high) ans+= 1;
        return dp[len] =  ans %MOD; 
     }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, -1);
        return sol(low ,high, zero, one , 0 ,dp) %MOD;
    }
};