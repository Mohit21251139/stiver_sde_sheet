class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();
        vector<int> count(26,0);
        int maxfreq = 0;
        char maxchar;
        for (char ch: s){
            count[ch- 'a']  ++;
            if (count[ch-'a'] > maxfreq){
                maxfreq = count[ch-'a'];
                maxchar = ch;
            }

             if (count[ch - 'a'] >(n+1)/2){
                return "";
             }
        }

        string ans = s;
        int i = 0;
        while(count[maxchar - 'a'] > 0){
           ans[i] = maxchar;
           i += 2;
           count[maxchar - 'a'] --;
        }
        for (char ch = 'a' ; ch<= 'z' ; ch++){
          while(count[ch - 'a'] > 0){
            if (i >= n){
                i = 1;
            }
            ans[i] = ch;
            i +=2;
            count[ch - 'a'] --;
          }
        }
        return ans;

    }
};