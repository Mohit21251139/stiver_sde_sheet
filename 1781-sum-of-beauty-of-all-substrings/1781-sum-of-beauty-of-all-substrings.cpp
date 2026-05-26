class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
          int ans = 0;
          vector <int> freq(26,0);
          for (int i =0;i< n;i++){
           vector <int> freq(26,0);
            int maxFreq = 0;

            for (int j = i ; j< n;j++){
                  int indx = s[j] - 'a';
                  freq[indx] ++;
                  maxFreq = max(maxFreq,freq[indx]);
                  int minFreq = INT_MAX;
                  for (int k = 0 ; k< 26;k++){
                     if (freq[k] > 0){
                        minFreq = min(minFreq,freq[k]);
                     }

                  }
                  ans += maxFreq - minFreq;

            }
          }
          return ans;
    }
};