class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
            int n = nums.size();
        vector<int> ksum(n - k + 1, 0);
        
        int currentSum = accumulate(nums.begin(), nums.begin() + k, 0);
        ksum[0] = currentSum;
        for (int i = 1; i <= n - k; ++i) {
            currentSum = currentSum - nums[i - 1] + nums[i + k - 1];
            ksum[i] = currentSum;
        }
        
        vector<int> left(n - k + 1, 0);
        int bestLeft = 0;
        for (int i = 0; i <= n - k; ++i) {
            if (ksum[i] > ksum[bestLeft]) {
                bestLeft = i;
            }
            left[i] = bestLeft;
        }
        
        vector<int> right(n - k + 1, 0);
        int bestRight = n - k;
        for (int i = n - k; i >= 0; --i) {
            if (ksum[i] >= ksum[bestRight]) {
                bestRight = i;
            }
            right[i] = bestRight;
        }
        
        vector<int> result(3, -1);
        int maxSum = 0;
        for (int mid = k; mid <= n - 2 * k; ++mid) {
            int leftIdx = left[mid - k];
            int rightIdx = right[mid + k];
            int totalSum = ksum[leftIdx] + ksum[mid] + ksum[rightIdx];
            if (totalSum > maxSum) {
                maxSum = totalSum;
                result = {leftIdx, mid, rightIdx};
            }
        }
        
        return result;

    }
};