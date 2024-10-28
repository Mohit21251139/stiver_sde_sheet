class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int> mpp;
        sort(nums.begin(),nums.end());
        int maxi = -1;
        for (int i =0;i<nums.size();i++){
            int root = sqrt(nums[i]);
            if (root * root == nums[i] && mpp.find(root) != mpp.end() ){
                mpp[nums[i]] = mpp[root] +1; 
                maxi = max(maxi,mpp[nums[i]]);
            }
            else{
                mpp[nums[i]] = 1; 
            }
        }
        return maxi ;
    }
};