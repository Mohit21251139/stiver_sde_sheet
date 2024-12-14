class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int end = 0;
        int left = 0;
        deque<int> maxhep,minhep;
        while (end < n){
            while (!maxhep.empty() && nums[maxhep.back()] <= nums[end]){
                maxhep.pop_back();
            }
            maxhep.push_back(end);
             while (!minhep.empty() && nums[minhep.back()] >= nums[end]){
                minhep.pop_back();
            }
            minhep.push_back(end);
           
           while (!minhep.empty() && !maxhep.empty() && nums[maxhep.front()] - nums[minhep.front()] > 2){
            if (minhep.front() == left) minhep.pop_front();
            if (maxhep.front() == left)maxhep.pop_front();
            left ++;
           }
            ans += end - left +1;
   end ++;
        }
        return ans ;
    }
};