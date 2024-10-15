class Solution {
public:
    long long minimumSteps(string s) {
         long long ans =0 ;
         long long cnt = 0;
         for (int i =0;i<s.length();i++){
            if (s[i] == '1'){
                cnt ++;
            }
            else if (s[i] == '0'){
                ans += cnt;
            }
         }
         return ans;
    }
};