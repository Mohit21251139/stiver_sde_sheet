class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for ( int i = 0;i<nums.size();i++){
            int curr = nums[i];
            if (mpp.find(curr)!= mpp.end()){
                   if (abs(mpp[curr] - i) <= k){
                    return true;
                   }
                 
            }
              mpp[curr] = i;
        }
        return false;
    }
};