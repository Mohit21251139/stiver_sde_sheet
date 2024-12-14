class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = INT_MIN;
        int currmax = 0;
        int mini = INT_MAX;
        int currmini =0;
        int total= 0;
        for (int i =0;i<nums.size();i++){
            currmax = max(currmax+ nums[i] , nums[i]);
            currmini= min(currmini+ nums[i] , nums[i]);
             total += nums[i];
             maxi = max(maxi, currmax);
             mini = min(mini,currmini);

        }

       
        return maxi> 0 ? max(maxi,total - mini): maxi;
    }
};