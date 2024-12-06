class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<int> count(n+1,0);
        for (int i =0;i<banned.size();i++){
            if (banned[i] >= count.size()){
                continue;
            }
            count[banned[i]] = -1;
        }
        int ans = 0;
        long long maxi =0;
        for (int i = 1;i<count.size();i++){
            if (maxi <= maxSum && count[i] != -1){

                maxi = maxi + i;
                if (maxi > maxSum){
                    break;
                }
                ans ++;
            }
        }
        return ans;
    }
};