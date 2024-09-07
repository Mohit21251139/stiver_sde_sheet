class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for (int i= 0;i<nums.size();i++){
            if (nums[i] == val){
                cnt ++;
            }

        }
        sort(nums.begin(),nums.end());
        int j = nums.size()-1;
        int i= 0;
        while(i<=j){
            if (nums[i] == val){
                swap(nums[i] ,nums[j]);
                i++;
                j--;
            }
            else {
                i++;
            }
        }
        return nums.size()-cnt;
    }
};