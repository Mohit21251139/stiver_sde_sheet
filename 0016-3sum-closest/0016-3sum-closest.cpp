class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //brute force 
        int mini = INT_MAX/2;
        int sum =0;
        int n = nums.size();
        for (int i =0;i< n-2;i++){
            for (int j =i+1;j< n-1;j++){
                for (int k =j+1;k<n;k++){
                    sum = nums[i] + nums[j] + nums[k];
                    if ( abs(sum - target) < abs(mini- target)){
                        mini = sum;
                    }
                    
                }
            }
        }
        return mini;
    }
};