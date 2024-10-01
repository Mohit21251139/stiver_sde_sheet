class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> ans(k);
        for (int i = 0;i<arr.size();i++){
            int rem = arr[i]% k;
            if (rem < 0) rem += k;
            ans[rem] += 1;
        }
        if (ans[0] %2 != 0)return false;
        for (int i = 1;i<=(k/2);i++){
            if (ans[i] != ans[k-i])return false;
        }
return true;
    }
};