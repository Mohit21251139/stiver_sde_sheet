class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        int cnt = 0;
        for (int i =0;i< 32;i++){
            int ans = 0;
            for (auto c: candidates){
                if ( (c>> i) & 1){
                    ans ++;
                }
                cnt = max(cnt,ans);
            }
        }
        return cnt;
    }
};