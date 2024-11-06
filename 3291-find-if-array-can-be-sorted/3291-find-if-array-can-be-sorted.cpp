class Solution {
public:
    int sol(int num){
        int count = 0;
        while (num > 0){
            count += (num & 1);
            num = num >> 1;

        }
        return count;
    }
    bool canSortArray(vector<int>& nums) {
        int maxi = nums[0];
        int bits = sol(nums[0]);
        int lastmaxi = 0;
        for (int i =0;i< nums.size();i++){
            bool bitchange = bits!= sol(nums[i]);
            if (bitchange){
                lastmaxi = maxi;
               
            }
            if (nums[i] > maxi){
                bits = sol(nums[i]);
                maxi = nums[i];
            }
            if(nums[i] < lastmaxi){
                return false;
            }
        }
        return true;
    }
};