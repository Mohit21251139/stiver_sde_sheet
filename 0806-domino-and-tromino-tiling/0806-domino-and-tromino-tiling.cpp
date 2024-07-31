class Solution {
public:
    int mod = 1e9+ 7;
    int sol(int n,vector<int>&dp){
        if (n == 1)return 1;
        if (n==2)return 2;
        if (n==3)return 5;
        if (dp[n] != -1)return dp[n];
        dp[n] = (((sol(n-1,dp)*2)%mod + sol(n-3,dp)%mod)%mod);
        return dp[n];
    }
    int numTilings(int n) {
        vector<int> dp(n+1,-1);
        return sol(n,dp);
    }
};