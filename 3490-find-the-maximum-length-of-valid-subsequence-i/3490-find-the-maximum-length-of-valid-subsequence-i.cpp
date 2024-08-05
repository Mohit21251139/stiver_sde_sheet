class Solution {
public:
    int maximumLength(vector<int>& nums) {
     int odd=0,even = 0,both = 0;
     int c = nums[0] %2 ;
     for (int i= 0;i<nums.size();i++){
        if (nums[i]%2 == 0){
            even ++;
        }else{
            odd++;
        }
        if (nums[i]%2 == c){
            both ++;
            c = 1-c;
        }
     }
     return max(both,max(even,odd));
    }
};