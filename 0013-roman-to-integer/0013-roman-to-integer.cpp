class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;
        int cnt = 0;
        int ans = 0;
        for (int i = 0;i<s.length()-1;i++){
            if (mpp[s[i]] < mpp[s[i+1]]){
                ans = ans- mpp[s[i]];
              
            }
            else{
                ans  = ans + mpp[s[i]];
            }
        }
        ans = ans + mpp[s[s.length()-1]];
        return ans;
    }
};