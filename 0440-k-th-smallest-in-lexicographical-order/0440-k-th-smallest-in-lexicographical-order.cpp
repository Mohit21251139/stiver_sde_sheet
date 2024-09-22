class Solution {
public:
  
    long  cnt(long  curr,long n){
     long step = 0,first = curr,last = curr;
     while(first<=n){
        step  += min(n+1,last+1) - first;
        first*= 10;
        last = last*10 +9;
     }
 return step;
    }
    int findKthNumber(int n, int k) {
        
        long curr = 1;
        k--;
        while (k>0){
            long step = cnt (curr,n);
            if (step <= k){
                curr++;
                k -= step;
            }
            else{
                curr *= 10;
                k--;
            }
        }
        return curr;
        
    }
};