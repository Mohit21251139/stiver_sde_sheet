class Solution {
public:
  
  
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
         int n = nums.size();
        vector<int> A(n);
        
        A[0] = 1;
        
        for (int i = 1; i < n; i++)
            A[i] = A[i - 1] + (nums[i] % 2 != nums[i - 1] % 2);
        
        vector<bool> res;
        
        for (auto q: queries)
        {
            int L = q[0], R = q[1];
            int d = A[R] - A[L];
            
            if (d == R - L)
                res.push_back(true);
            else
                res.push_back(false);
        }
        
        return res;
    }
};