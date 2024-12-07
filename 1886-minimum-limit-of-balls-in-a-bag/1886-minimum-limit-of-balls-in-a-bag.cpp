class Solution {
public:
    bool ispossible(int mid,vector<int>& nums,int maxOperations){
        int ope =0;
        for (auto& num : nums){
            int curr = (int) ceil((double)num/mid) -1 ;
            ope += curr;
            if (ope > maxOperations){
                return false;
            }

        }
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int start = 1;
        int end = *max_element(nums.begin(),nums.end());
        int ans =end;
        while (start<= end){
          int mid = start + (end - start)/2;
          if (ispossible(mid,nums,maxOperations)){
            ans = mid;
            end = mid -1;
          }
          else {
            start = mid +1 ;
          }
        }
        return ans;
    }
};