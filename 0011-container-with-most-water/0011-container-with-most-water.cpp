class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i = 0,j = nums.size()-1;
        long long  sum = 0;
        while (i<j){
          

            long long   ans = (j-i) *  min(nums[i],nums[j]);
            if (nums[i] < nums[j]){
                i++;
            }
            else{
                j--;
            }
            sum = max(sum,ans);

        }
        return (int)sum;
    }
};