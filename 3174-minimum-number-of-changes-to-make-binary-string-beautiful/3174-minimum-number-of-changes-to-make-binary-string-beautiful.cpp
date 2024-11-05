class Solution {
public:
    int minChanges(string s) {
        int i = 0;
        int ans = 0;
        while (i< s.length ()){
            char ch = s[i];
            int len = 0;
            while(i< s.length() && s[i] == ch){
                len++;
                i++;
            }
            if (len & 1){
                ans ++;
                i++;
            }
        }
        return ans;
    }
};