class Solution {
public:
    int maximumLength(string s) {
        int n = s.length();
        vector<vector<int>> count(26,vector<int>(n+1,0));

        for (int i =0,len = 1;i<n;i++){
            char ch = s[i];
            if (i> 0 && s[i] == s[i-1]){
                len ++;
            }
            else {
                len = 1;
            }
            count[ch - 'a'][len]++;
        }
        int maxi = 0;
        for (int ch = 0;ch< 26;ch++){
            for (int i = n;i> 0;i--){
                if (i< n )count[ch][i] += count[ch][i+1];
                if (count[ch][i] >= 3){
                    maxi = max(maxi,i);
                    break;
                }
            }
        }
        return maxi == 0 ? -1: maxi;
    }
};