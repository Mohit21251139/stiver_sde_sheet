class Solution {
public:
    int sol(vector<vector<int>>& books, int s,int ind,int width ,int height,vector<vector<int>>& dp){
        if (ind >=books.size()){
            return height;
        }
        if (dp[ind][width] != -1)return dp[ind][width];
       int w= books[ind][0];
       int h = books[ind][1];
       int ans = INT_MAX;
       int notans = INT_MAX;
       if (width>= w){

        ans = sol(books,s,ind+1,width-w,max(height,h),dp);
       }
       notans = height + sol(books,s,ind +1,s-w,h,dp);

       dp[ind][width]=  min(ans,notans);
       return dp[ind][width];

    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
      vector<vector<int>> dp(n,vector<int>(shelfWidth+1,-1));
        return  sol(books,shelfWidth,0,shelfWidth,0,dp);
    }
};