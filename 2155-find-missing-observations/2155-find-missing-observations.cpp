class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int totalsum = 0;
        int curr = 0;
        for (int i= 0;i<rolls.size();i++){
            curr+= rolls[i];
        }
        totalsum = mean * (rolls.size()+n);
        
        int remain = totalsum - curr;
        if (remain < n || remain > 6*n ){
            return {};
        }
        int rem = remain % n;
        int q = remain /n;
        vector<int>ans(n,q);
        for (int i= 0;i<rem;i++){
            ans[i]++;

        }
        return ans;

    }
};