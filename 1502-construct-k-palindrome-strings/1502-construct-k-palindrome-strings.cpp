class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
         if (n < k )return false;
         vector<int> freq(26);
         for (int i =0;i<n;i++){
            freq[s[i] - 'a'] ++;
         }
         int odd = 0;
        for (auto& it: freq){
            if (it % 2== 1){
                odd++;
            }
        }
          if (odd > k )return false;
         return true;
    }
};