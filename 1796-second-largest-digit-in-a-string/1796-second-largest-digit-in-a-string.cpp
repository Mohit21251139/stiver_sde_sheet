class Solution {
public:
    int secondHighest(string s) {
        int l = -1;
        int sm = -1;
      for (char ch : s){
        if (isdigit(ch)){
            int num  = ch -'0';

                if (num > l) {
                    sm = l;
                    l = num;
                } else if (num < l && num > sm) {
                    sm = num;
                }
        }
      }
      return sm;
       
    }
};