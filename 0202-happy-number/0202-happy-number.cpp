class Solution {
public:
  int sol (int v){
    int n = 0;
    while(v>0){
        n += (v%10) * (v%10);
        v = v/10;
    }
    return n;
  }
    bool isHappy(int n) {
      while(n>4){
        n = sol(n);
      }
       
        return n==1;
        
    }
};