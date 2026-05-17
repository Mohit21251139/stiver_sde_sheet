class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int i = n/2 ; i>=1; i--){
            if (n%i == 0){
                int times = n/i;
                string sub = s.substr(0,i);
                string ans = "";
                while(times -- ){
                   ans += sub;
                }
                if (ans == s)return true;
            }
        }
        return false;
    }
};