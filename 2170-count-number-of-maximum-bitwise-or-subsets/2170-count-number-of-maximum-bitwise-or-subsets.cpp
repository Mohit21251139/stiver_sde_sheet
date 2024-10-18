class Solution {
public:
    void sol(int ind , vector<int>& nums,int maxi , int & ans, int curr){
        if (ind == nums.size()){
            if (curr == maxi ){
                ans ++;
            }
           
            return ;
        }

        // not take it 
        sol(ind +1,nums, maxi,ans, curr);

        // take it 
        sol(ind +1,nums,maxi,ans, curr | nums[ind]);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int max_or = 0;
        for (int i=0;i<nums.size();i++){
            max_or = max_or | nums[i];
        }
        int ans = 0;
        sol(0,nums,max_or,ans,0);
        return ans;
    }
};