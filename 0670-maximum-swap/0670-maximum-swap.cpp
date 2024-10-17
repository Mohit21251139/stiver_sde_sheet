class Solution {
public:
    int maximumSwap(int num) {
      string s = to_string(num);
      for (int i = 0;i<s.length();i++){
        int n = i;
        for (int j = s.length()-1;j> i;j--){
            if (s[j] > s[n]){
                n = j;
            }
        }
        if (n != i){
            char temp = s[n];
            s[n] = s[i];
            s[i] = temp;
            break;
        }

      }
      return stoi(s);
    }
};