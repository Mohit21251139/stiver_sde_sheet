class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> dp(n+1);
    
        
        for (int i = 0;i<=n;i++){
            int num = i,sum=0;
            while(num){
                sum+=num%2;
                num/=2;
            }
            dp[i] = sum;
        }
        return dp;
    }
};