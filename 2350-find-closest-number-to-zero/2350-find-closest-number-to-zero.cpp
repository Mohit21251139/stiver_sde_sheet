class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        unordered_set<int> st;
        for (int i =0;i<nums.size();i++){
            if (nums[i] > 0){
                st.insert(nums[i]);

            }
        }
 
        if (nums.size() == 1){
            return nums[0];
        }
               long long ans =  nums[0];

        for (int i =1;i<nums.size();i++){
          if (abs(nums[i]) <= abs(ans)){
            ans = nums[i];
          }
        }
        if (st.find(abs(ans)) != st.end()){
            ans = abs(ans);
        }
        return ans;
    }
};