class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int end = 0;
        int mini = INT_MAX;
        long long  sum = 0;

        while (end < nums.size()){
           sum += nums[end];
           while (sum >=target){
            mini = min(mini,end -start +1);
            sum -= nums[start++];
           }    
           end ++;
        }
        return mini == INT_MAX ? 0 : mini;
    }
};