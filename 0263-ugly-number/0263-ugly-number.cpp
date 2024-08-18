class Solution {
public:
    bool isUgly(int n) {
        if (n == 1)return 1;
        if (n ==0)return 0;
        int num = n;
        while (num){
              
              if (num%2 == 0){
                num = num/2;
              }
              else if (num%3 == 0){
                num = num/3;
              }
              else if (num%5 ==0){
                num = num/5;
              }
              else if (num == 1)return true;
              else {
                return false;
              }
        }
        return true;
    }
};