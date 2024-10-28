class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() == 1)return 0;
        int total = accumulate(nums.begin(),nums.end(),0);
        int left = 0;
        for (int i=0;i< nums.size();i++){
            int right = total - left - nums[i];
            if (left == right){
return i;
            }
            left += nums[i];
        }
        return -1;
    }
};