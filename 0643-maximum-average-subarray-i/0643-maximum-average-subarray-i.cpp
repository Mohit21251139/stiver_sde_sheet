class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0,r = 0;
        double sum= 0;
        double maxsum = INT_MIN;
         long long cnt = 0;
        while(r<n){
           sum+= nums[r];
           cnt ++;
           if (cnt > k){
            sum -= nums[l];
            l++;
            cnt --;
           }
           if (cnt == k){
            maxsum = max(maxsum,sum/k);
           }
          
           r++;
        }

      return maxsum;
    }
};