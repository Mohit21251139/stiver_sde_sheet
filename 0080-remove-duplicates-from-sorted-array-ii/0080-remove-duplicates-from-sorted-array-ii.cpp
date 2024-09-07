class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n<3)return n;
        int a= 2;
        for (int i= 2;i< n;i++){
            if (nums[a-2] != nums[i]){
                nums[a] = nums[i];
                a++;
            }
        }
        return a;
    }
};