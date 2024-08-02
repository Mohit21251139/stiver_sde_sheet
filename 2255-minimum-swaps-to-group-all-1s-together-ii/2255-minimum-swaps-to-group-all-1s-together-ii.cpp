class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r = 0;
        int cnt = 0;
        for (int i= 0;i< n;i++){
            if (nums[i] == 1){
                cnt ++;
            }
        }
       int cnt1 = 0;
       int totalcnt = 0;
        while (r<2*n){
            if (nums[r%n] == 1){
                cnt1++;
            }

            int len = r - l +1;
            if ( len> cnt){
                if (nums[l%n] == 1){
                    cnt1--;
                }
                l++;

            }
            totalcnt = max(totalcnt , cnt1);
            r++;
        }
        return cnt - totalcnt;
    }
};