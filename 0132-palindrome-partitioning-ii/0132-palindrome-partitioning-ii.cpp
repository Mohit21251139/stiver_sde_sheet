class Solution {
    private:
    bool isPalindrome(int i,int j,string &str){
    while(i<j){
        if (str[i]!= str[j])return false;
        i++;
        j--;
    }
    return true;
}
public:

    int minCut(string str) {
         int n = str.length();
    // vector <int >dp(n,-1);
    // return f(0,n,str,dp)-1;

    //Tabulation
    vector <int >dp(n+1,0);
    

    for (int i = n-1 ;i>= 0 ;i--){
          int minCost = INT_MAX;
    
         for (int j= i;j<n;j++ ){

            if (isPalindrome(i,j,str)){
            int cost = 1+ dp[j+ 1];
            minCost =  min(cost,minCost);
        }
    }
     dp[i] = minCost;
    }
    return dp[0]-1 ;
    
    }
};