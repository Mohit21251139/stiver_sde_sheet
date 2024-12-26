class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
           int ts = 0;
					 int n = nums.size();
    for (int i = 0;i<n;i++){
        ts += nums[i];
    }
    int k = (ts-target)/2;
    if (ts - target <0 || (ts -target)%2 ) return 0;
   
	vector <int > prev(k+1,0),curr(k+1,0);
	//for (int i = 0;i< n;i++)return dp[i ][0] = 1;
    if (nums[0] == 0) prev[0] = 2;
    else prev[0] = 1;
    if (nums[0]!= 0 && nums[0] <= k ) prev[nums[0]] = 1;

	//prev [0] = curr[0] = 1;
	//if (arr[0] <= k )prev[arr[0]] = 1;
	
	for (int i = 1;i<n;i++){
		for (int s = 0;s<= k;s++){
			int np = prev[s];
        	int p = 0;
	        if(nums[i] <= s) p += prev[s- nums[i]];
             curr[s]=  (p+np);
		}
		prev = curr;
	}
	return prev[k];
    }
};